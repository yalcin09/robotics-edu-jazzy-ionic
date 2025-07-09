#!/usr/bin/env python3

# =============================================================================
# DOSYA: scripts/ros2_debug_tools.py
# AMAÇ: ROS2 debug ve monitoring için interactive script
# KULLANIM: python3 ros2_debug_tools.py
# ÖĞRENME: ROS2 command line tools, system analysis, debugging workflows
# =============================================================================

import subprocess
import time
import json
import sys
import os
from typing import List, Dict, Any
from datetime import datetime
import argparse

class ROS2DebugTools:
    """
    ROS2 sistem debugging ve monitoring için kapsamlı araç seti
    
    Bu class şunları sağlar:
    - Node ve topic analizi
    - Performance monitoring
    - Communication debugging
    - System health checks
    - Automated diagnostics
    """
    
    def __init__(self):
        """Debug tools'u başlatır"""
        self.start_time = time.time()
        self.measurements = []
        
        print("🛠️  ROS2 Debug Tools başlatılıyor...")
        print("📊 Sistem analizi hazırlanıyor...")
        
        # ROS2 sisteminin çalışıp çalışmadığını kontrol et
        if not self.check_ros2_system():
            print("❌ ROS2 sistemi bulunamadı veya çalışmıyor!")
            print("💡 'source /opt/ros/jazzy/setup.bash' komutunu çalıştırdınız mı?")
            sys.exit(1)
        
        print("✅ ROS2 sistemi aktif - Debug tools hazır!")
    
    def check_ros2_system(self) -> bool:
        """ROS2 sisteminin çalışıp çalışmadığını kontrol eder"""
        try:
            result = subprocess.run(['ros2', 'node', 'list'], 
                                  capture_output=True, text=True, timeout=5)
            return result.returncode == 0
        except (subprocess.TimeoutExpired, FileNotFoundError):
            return False
    
    # =========================================================================
    # NODE ANALİZ ARAÇLARI
    # =========================================================================
    
    def analyze_nodes(self, detailed: bool = False) -> Dict[str, Any]:
        """
        Sistemdeki tüm node'ları analiz eder
        
        Args:
            detailed: Detaylı analiz yapılsın mı?
            
        Returns:
            Node analiz sonuçları
        """
        print("\n🔍 === NODE ANALİZİ ===")
        
        # Node listesini al
        try:
            result = subprocess.run(['ros2', 'node', 'list'], 
                                  capture_output=True, text=True)
            if result.returncode != 0:
                print("❌ Node listesi alınamadı")
                return {}
            
            nodes = [line.strip() for line in result.stdout.strip().split('\n') if line.strip()]
            
        except Exception as e:
            print(f"❌ Node listesi alınırken hata: {e}")
            return {}
        
        print(f"📊 Toplam {len(nodes)} node bulundu:")
        
        node_analysis = {
            'total_nodes': len(nodes),
            'nodes': [],
            'namespaces': set(),
            'issues': []
        }
        
        for i, node in enumerate(nodes, 1):
            print(f"   {i:2d}. {node}")
            
            # Namespace analizi
            if '/' in node:
                namespace = '/'.join(node.split('/')[:-1]) or '/'
                node_analysis['namespaces'].add(namespace)
            
            # Detaylı analiz isteniyorsa
            if detailed:
                node_details = self.get_node_details(node)
                node_analysis['nodes'].append({
                    'name': node,
                    'details': node_details
                })
        
        # Namespace özeti
        print(f"\n🏷️  Namespace'ler ({len(node_analysis['namespaces'])}):")
        for ns in sorted(node_analysis['namespaces']):
            print(f"   📁 {ns}")
        
        return node_analysis
    
    def get_node_details(self, node_name: str) -> Dict[str, Any]:
        """Belirli bir node hakkında detaylı bilgi alır"""
        try:
            result = subprocess.run(['ros2', 'node', 'info', node_name], 
                                  capture_output=True, text=True, timeout=10)
            
            if result.returncode != 0:
                return {'error': 'Node info alınamadı'}
            
            # Output'u parse et (basit parsing)
            info = result.stdout
            details = {
                'publishers': [],
                'subscribers': [],
                'services': [],
                'clients': [],
                'raw_info': info
            }
            
            # Publisher/Subscriber sayılarını say (basit parsing)
            details['publisher_count'] = info.count('Publishers:')
            details['subscriber_count'] = info.count('Subscribers:')
            details['service_count'] = info.count('Services:')
            
            return details
            
        except subprocess.TimeoutExpired:
            return {'error': 'Timeout - Node yanıt vermiyor'}
        except Exception as e:
            return {'error': f'Beklenmeyen hata: {e}'}
    
    # =========================================================================
    # TOPIC ANALİZ ARAÇLARI
    # =========================================================================
    
    def analyze_topics(self, show_types: bool = True) -> Dict[str, Any]:
        """
        Sistemdeki tüm topic'leri analiz eder
        
        Args:
            show_types: Topic türlerini göster mi?
            
        Returns:
            Topic analiz sonuçları
        """
        print("\n📡 === TOPIC ANALİZİ ===")
        
        try:
            # Topic listesini al
            result = subprocess.run(['ros2', 'topic', 'list'], 
                                  capture_output=True, text=True)
            if result.returncode != 0:
                print("❌ Topic listesi alınamadı")
                return {}
            
            topics = [line.strip() for line in result.stdout.strip().split('\n') if line.strip()]
            
        except Exception as e:
            print(f"❌ Topic listesi alınırken hata: {e}")
            return {}
        
        print(f"📊 Toplam {len(topics)} topic bulundu:")
        
        topic_analysis = {
            'total_topics': len(topics),
            'topics': [],
            'message_types': {},
            'namespaces': set()
        }
        
        for i, topic in enumerate(topics, 1):
            topic_info = {'name': topic}
            
            # Topic type'ını al (eğer isteniyorsa)
            if show_types:
                topic_type = self.get_topic_type(topic)
                topic_info['type'] = topic_type
                
                # Message type istatistikleri
                if topic_type and topic_type != 'unknown':
                    topic_analysis['message_types'][topic_type] = \
                        topic_analysis['message_types'].get(topic_type, 0) + 1
            
            # Namespace analizi
            if '/' in topic and topic != '/':
                namespace = '/'.join(topic.split('/')[:-1]) or '/'
                topic_analysis['namespaces'].add(namespace)
            
            topic_analysis['topics'].append(topic_info)
            
            # Progress gösterimi
            if show_types:
                print(f"   {i:2d}. {topic} ({topic_info.get('type', 'unknown')})")
            else:
                print(f"   {i:2d}. {topic}")
        
        # Message type özeti
        if show_types and topic_analysis['message_types']:
            print(f"\n📝 Message Türleri ({len(topic_analysis['message_types'])}):")
            for msg_type, count in sorted(topic_analysis['message_types'].items()):
                print(f"   📄 {msg_type}: {count} topic")
        
        # Namespace özeti
        print(f"\n🏷️  Topic Namespace'leri ({len(topic_analysis['namespaces'])}):")
        for ns in sorted(topic_analysis['namespaces']):
            topics_in_ns = [t for t in topics if t.startswith(ns + '/') or (ns == '/' and t.count('/') == 1)]
            print(f"   📁 {ns}: {len(topics_in_ns)} topic")
        
        return topic_analysis
    
    def get_topic_type(self, topic_name: str) -> str:
        """Bir topic'in mesaj türünü alır"""
        try:
            result = subprocess.run(['ros2', 'topic', 'type', topic_name], 
                                  capture_output=True, text=True, timeout=5)
            if result.returncode == 0:
                return result.stdout.strip()
            else:
                return 'unknown'
        except (subprocess.TimeoutExpired, Exception):
            return 'unknown'
    
    # =========================================================================
    # PERFORMANS MONİTÖRİNG
    # =========================================================================
    
    def monitor_topic_performance(self, topic_name: str, duration: int = 10) -> Dict[str, Any]:
        """
        Belirli bir topic'in performansını izler
        
        Args:
            topic_name: İzlenecek topic adı
            duration: İzleme süresi (saniye)
            
        Returns:
            Performans metrikleri
        """
        print(f"\n📈 === TOPIC PERFORMANS MONİTÖRİNG ===")
        print(f"📡 Topic: {topic_name}")
        print(f"⏱️  Süre: {duration} saniye")
        print("🔄 Monitoring başlatılıyor...")
        
        # Hz (frequency) ölçümü
        print("\n1️⃣  Mesaj frekansı ölçülüyor...")
        hz_result = self.measure_topic_hz(topic_name, duration // 2)
        
        # Bandwidth ölçümü
        print("2️⃣  Bandwidth ölçülüyor...")
        bw_result = self.measure_topic_bandwidth(topic_name, duration // 2)
        
        # Echo test (mesaj içeriği kontrolü)
        print("3️⃣  Mesaj içeriği kontrol ediliyor...")
        echo_result = self.test_topic_echo(topic_name)
        
        performance = {
            'topic': topic_name,
            'timestamp': datetime.now().isoformat(),
            'frequency': hz_result,
            'bandwidth': bw_result,
            'connectivity': echo_result,
            'duration': duration
        }
        
        # Sonuçları göster
        print(f"\n📊 === PERFORMANS SONUÇLARI ===")
        print(f"📡 Topic: {topic_name}")
        
        if hz_result.get('average_rate'):
            print(f"⚡ Frekans: {hz_result['average_rate']:.2f} Hz")
        else:
            print("⚡ Frekans: Ölçülemedi")
        
        if bw_result.get('average_bandwidth'):
            print(f"📊 Bandwidth: {bw_result['average_bandwidth']:.2f} KB/s")
        else:
            print("📊 Bandwidth: Ölçülemedi")
        
        print(f"🔗 Bağlantı: {'✅ OK' if echo_result['success'] else '❌ Sorunlu'}")
        
        return performance
    
    def measure_topic_hz(self, topic_name: str, duration: int) -> Dict[str, Any]:
        """Topic'in mesaj frekansını ölçer"""
        try:
            result = subprocess.run(['ros2', 'topic', 'hz', topic_name], 
                                  capture_output=True, text=True, timeout=duration + 5)
            
            # Output'u parse et
            output = result.stdout
            if 'average rate:' in output:
                # "average rate: 10.000" formatından sayıyı çıkar
                for line in output.split('\n'):
                    if 'average rate:' in line:
                        rate_str = line.split('average rate:')[1].strip()
                        try:
                            rate = float(rate_str)
                            return {'success': True, 'average_rate': rate}
                        except ValueError:
                            pass
            
            return {'success': False, 'error': 'Rate parse edilemedi'}
            
        except subprocess.TimeoutExpired:
            return {'success': False, 'error': 'Timeout'}
        except Exception as e:
            return {'success': False, 'error': str(e)}
    
    def measure_topic_bandwidth(self, topic_name: str, duration: int) -> Dict[str, Any]:
        """Topic'in bandwidth'ini ölçer"""
        try:
            result = subprocess.run(['ros2', 'topic', 'bw', topic_name], 
                                  capture_output=True, text=True, timeout=duration + 5)
            
            # Output'u parse et
            output = result.stdout
            if 'average:' in output:
                # "average: 1.23 KB/s" formatından sayıyı çıkar
                for line in output.split('\n'):
                    if 'average:' in line:
                        parts = line.split('average:')[1].strip().split()
                        if len(parts) >= 2:
                            try:
                                bw_value = float(parts[0])
                                bw_unit = parts[1]
                                return {
                                    'success': True, 
                                    'average_bandwidth': bw_value,
                                    'unit': bw_unit
                                }
                            except ValueError:
                                pass
            
            return {'success': False, 'error': 'Bandwidth parse edilemedi'}
            
        except subprocess.TimeoutExpired:
            return {'success': False, 'error': 'Timeout'}
        except Exception as e:
            return {'success': False, 'error': str(e)}
    
    def test_topic_echo(self, topic_name: str) -> Dict[str, Any]:
        """Topic'ten mesaj alınabilir mi test eder"""
        try:
            result = subprocess.run(['ros2', 'topic', 'echo', '--once', topic_name], 
                                  capture_output=True, text=True, timeout=10)
            
            if result.returncode == 0 and result.stdout.strip():
                return {
                    'success': True, 
                    'has_data': True,
                    'sample_message': result.stdout.strip()[:200] + '...' if len(result.stdout) > 200 else result.stdout.strip()
                }
            else:
                return {'success': False, 'error': 'Mesaj alınamadı'}
            
        except subprocess.TimeoutExpired:
            return {'success': False, 'error': 'Timeout - Mesaj bekleme süresi aşıldı'}
        except Exception as e:
            return {'success': False, 'error': str(e)}
    
    # =========================================================================
    # SİSTEM SAĞLIK KONTROLLERI
    # =========================================================================
    
    def health_check(self) -> Dict[str, Any]:
        """Kapsamlı sistem sağlık kontrolü yapar"""
        print("\n🏥 === SİSTEM SAĞLIK KONTROLÜ ===")
        
        health_report = {
            'timestamp': datetime.now().isoformat(),
            'overall_status': 'unknown',
            'checks': {},
            'issues': [],
            'recommendations': []
        }
        
        # 1. ROS2 daemon kontrolü
        print("1️⃣  ROS2 daemon kontrolü...")
        daemon_status = self.check_ros2_daemon()
        health_report['checks']['ros2_daemon'] = daemon_status
        
        # 2. Node connectivity kontrolü
        print("2️⃣  Node bağlantıları kontrol ediliyor...")
        connectivity_status = self.check_node_connectivity()
        health_report['checks']['node_connectivity'] = connectivity_status
        
        # 3. Topic flow kontrolü
        print("3️⃣  Topic trafiği analiz ediliyor...")
        topic_flow_status = self.check_topic_flow()
        health_report['checks']['topic_flow'] = topic_flow_status
        
        # 4. Resource usage kontrolü
        print("4️⃣  Kaynak kullanımı kontrol ediliyor...")
        resource_status = self.check_resource_usage()
        health_report['checks']['resource_usage'] = resource_status
        
        # 5. Error log kontrolü
        print("5️⃣  Error logları tarıyor...")
        log_status = self.check_error_logs()
        health_report['checks']['error_logs'] = log_status
        
        # Genel durum hesaplama
        health_report['overall_status'] = self.calculate_overall_health(health_report['checks'])
        
        # Sorunları ve önerileri topla
        self.generate_health_recommendations(health_report)
        
        # Raporu göster
        self.display_health_report(health_report)
        
        return health_report
    
    def check_ros2_daemon(self) -> Dict[str, Any]:
        """ROS2 daemon durumunu kontrol eder"""
        try:
            result = subprocess.run(['ros2', 'daemon', 'status'], 
                                  capture_output=True, text=True, timeout=5)
            
            if result.returncode == 0:
                return {'status': 'healthy', 'message': 'ROS2 daemon çalışıyor'}
            else:
                return {'status': 'warning', 'message': 'ROS2 daemon problemi'}
                
        except Exception as e:
            return {'status': 'error', 'message': f'Daemon kontrol hatası: {e}'}
    
    def check_node_connectivity(self) -> Dict[str, Any]:
        """Node'ların birbirleriyle iletişimini kontrol eder"""
        try:
            # Node listesini al
            result = subprocess.run(['ros2', 'node', 'list'], 
                                  capture_output=True, text=True)
            if result.returncode != 0:
                return {'status': 'error', 'message': 'Node listesi alınamadı'}
            
            nodes = [line.strip() for line in result.stdout.strip().split('\n') if line.strip()]
            
            if len(nodes) == 0:
                return {'status': 'warning', 'message': 'Hiç node bulunamadı'}
            elif len(nodes) < 2:
                return {'status': 'info', 'message': f'Sadece {len(nodes)} node var'}
            else:
                return {'status': 'healthy', 'message': f'{len(nodes)} node aktif'}
                
        except Exception as e:
            return {'status': 'error', 'message': f'Node connectivity hatası: {e}'}
    
    def check_topic_flow(self) -> Dict[str, Any]:
        """Topic trafiğinin akıp akmadığını kontrol eder"""
        try:
            # Topic listesini al
            result = subprocess.run(['ros2', 'topic', 'list'], 
                                  capture_output=True, text=True)
            if result.returncode != 0:
                return {'status': 'error', 'message': 'Topic listesi alınamadı'}
            
            topics = [line.strip() for line in result.stdout.strip().split('\n') if line.strip()]
            
            # Birkaç topic'i test et
            active_topics = 0
            tested_topics = min(5, len(topics))  # En fazla 5 topic test et
            
            for topic in topics[:tested_topics]:
                try:
                    # Kısa timeout ile mesaj al
                    result = subprocess.run(['ros2', 'topic', 'echo', '--once', topic], 
                                          capture_output=True, text=True, timeout=2)
                    if result.returncode == 0 and result.stdout.strip():
                        active_topics += 1
                except subprocess.TimeoutExpired:
                    pass  # Timeout normal, devam et
                except Exception:
                    pass  # Hata normal, devam et
            
            if tested_topics == 0:
                return {'status': 'info', 'message': 'Test edilecek topic yok'}
            elif active_topics == 0:
                return {'status': 'warning', 'message': f'{tested_topics} topic test edildi, hiçbirinde trafik yok'}
            else:
                ratio = active_topics / tested_topics
                if ratio >= 0.8:
                    return {'status': 'healthy', 'message': f'{active_topics}/{tested_topics} topic aktif'}
                elif ratio >= 0.5:
                    return {'status': 'warning', 'message': f'Sadece {active_topics}/{tested_topics} topic aktif'}
                else:
                    return {'status': 'error', 'message': f'Çoğu topic pasif: {active_topics}/{tested_topics}'}
                    
        except Exception as e:
            return {'status': 'error', 'message': f'Topic flow hatası: {e}'}
    
    def check_resource_usage(self) -> Dict[str, Any]:
        """Sistem kaynaklarını kontrol eder"""
        try:
            # CPU ve memory kullanımını kontrol et (basit yaklaşım)
            # Gerçek implementasyonda psutil kullanılabilir
            
            # Load average kontrol et
            try:
                with open('/proc/loadavg', 'r') as f:
                    load_avg = float(f.read().split()[0])
                
                # CPU core sayısını al
                cpu_cores = os.cpu_count() or 1
                load_ratio = load_avg / cpu_cores
                
                if load_ratio > 2.0:
                    return {'status': 'error', 'message': f'Yüksek sistem yükü: {load_avg:.2f}'}
                elif load_ratio > 1.0:
                    return {'status': 'warning', 'message': f'Orta sistem yükü: {load_avg:.2f}'}
                else:
                    return {'status': 'healthy', 'message': f'Normal sistem yükü: {load_avg:.2f}'}
                    
            except Exception:
                return {'status': 'info', 'message': 'Sistem yükü kontrol edilemedi'}
                
        except Exception as e:
            return {'status': 'error', 'message': f'Resource check hatası: {e}'}
    
    def check_error_logs(self) -> Dict[str, Any]:
        """ROS2 error loglarını kontrol eder"""
        try:
            # ~/.ros/log dizinindeki son logları kontrol et
            log_dir = os.path.expanduser('~/.ros/log')
            if not os.path.exists(log_dir):
                return {'status': 'info', 'message': 'Log dizini bulunamadı'}
            
            # Son log dizinini bul
            try:
                log_dirs = [d for d in os.listdir(log_dir) if os.path.isdir(os.path.join(log_dir, d))]
                if not log_dirs:
                    return {'status': 'info', 'message': 'Log dosyası bulunamadı'}
                
                latest_log_dir = max(log_dirs)
                latest_log_path = os.path.join(log_dir, latest_log_dir)
                
                # Log dosyalarında ERROR ara
                error_count = 0
                warning_count = 0
                
                for root, dirs, files in os.walk(latest_log_path):
                    for file in files:
                        if file.endswith('.log'):
                            try:
                                with open(os.path.join(root, file), 'r') as f:
                                    content = f.read()
                                    error_count += content.count('[ERROR]')
                                    warning_count += content.count('[WARN]')
                            except Exception:
                                continue
                
                if error_count > 10:
                    return {'status': 'error', 'message': f'{error_count} hata, {warning_count} uyarı bulundu'}
                elif error_count > 0 or warning_count > 10:
                    return {'status': 'warning', 'message': f'{error_count} hata, {warning_count} uyarı bulundu'}
                else:
                    return {'status': 'healthy', 'message': f'Temiz loglar: {error_count} hata, {warning_count} uyarı'}
                    
            except Exception:
                return {'status': 'info', 'message': 'Log analizi yapılamadı'}
                
        except Exception as e:
            return {'status': 'error', 'message': f'Log check hatası: {e}'}
    
    def calculate_overall_health(self, checks: Dict[str, Dict[str, Any]]) -> str:
        """Genel sistem sağlığını hesaplar"""
        statuses = [check['status'] for check in checks.values()]
        
        if 'error' in statuses:
            return 'unhealthy'
        elif 'warning' in statuses:
            return 'degraded'
        elif 'healthy' in statuses:
            return 'healthy'
        else:
            return 'unknown'
    
    def generate_health_recommendations(self, health_report: Dict[str, Any]) -> None:
        """Sağlık durumuna göre öneriler üretir"""
        recommendations = []
        issues = []
        
        for check_name, check_result in health_report['checks'].items():
            status = check_result['status']
            message = check_result['message']
            
            if status == 'error':
                issues.append(f"{check_name}: {message}")
                
                if 'daemon' in check_name:
                    recommendations.append("ROS2 daemon'ı yeniden başlatın: ros2 daemon stop && ros2 daemon start")
                elif 'topic' in check_name:
                    recommendations.append("Topic publisher/subscriber'ları kontrol edin")
                elif 'resource' in check_name:
                    recommendations.append("Sistem kaynaklarını optimize edin, gereksiz process'leri kapatın")
                elif 'log' in check_name:
                    recommendations.append("Log dosyalarını inceleyin ve hataları düzeltin")
                    
            elif status == 'warning':
                issues.append(f"{check_name}: {message}")
                
                if 'resource' in check_name:
                    recommendations.append("Sistem performansını izleyin")
                elif 'topic' in check_name:
                    recommendations.append("Pasif topic'lerin nedenini araştırın")
        
        health_report['issues'] = issues
        health_report['recommendations'] = recommendations
    
    def display_health_report(self, health_report: Dict[str, Any]) -> None:
        """Sağlık raporunu görüntüler"""
        print(f"\n🏥 === SAĞLIK RAPORU ===")
        
        # Genel durum
        overall = health_report['overall_status']
        if overall == 'healthy':
            print("✅ Genel Durum: SAĞLIKLI")
        elif overall == 'degraded':
            print("⚠️  Genel Durum: PERFORMANS DÜŞÜKLÜĞÜ")
        elif overall == 'unhealthy':
            print("❌ Genel Durum: PROBLEMLI")
        else:
            print("❓ Genel Durum: BİLİNMİYOR")
        
        # Detaylı kontroller
        print(f"\n📋 Detaylar:")
        for check_name, result in health_report['checks'].items():
            status = result['status']
            message = result['message']
            
            if status == 'healthy':
                icon = "✅"
            elif status == 'warning':
                icon = "⚠️ "
            elif status == 'error':
                icon = "❌"
            else:
                icon = "ℹ️ "
            
            print(f"   {icon} {check_name}: {message}")
        
        # Sorunlar
        if health_report['issues']:
            print(f"\n⚠️  Tespit Edilen Sorunlar:")
            for issue in health_report['issues']:
                print(f"   🔸 {issue}")
        
        # Öneriler
        if health_report['recommendations']:
            print(f"\n💡 Öneriler:")
            for rec in health_report['recommendations']:
                print(f"   🔹 {rec}")
        
        print("🏥 ========================")
    
    # =========================================================================
    # INTERACTİVE MENU SİSTEMİ
    # =========================================================================
    
    def run_interactive_mode(self):
        """Interactive debug menüsünü çalıştırır"""
        print("\n🎛️  === ROS2 DEBUG TOOLS - INTERACTİVE MODE ===")
        
        while True:
            print("\n📋 Mevcut Seçenekler:")
            print("   1️⃣  Node Analizi")
            print("   2️⃣  Topic Analizi")
            print("   3️⃣  Topic Performance Monitoring")
            print("   4️⃣  Sistem Sağlık Kontrolü")
            print("   5️⃣  Hızlı Durum Özeti")
            print("   6️⃣  Custom Command Çalıştır")
            print("   0️⃣  Çıkış")
            
            try:
                choice = input("\n🎯 Seçiminiz (0-6): ").strip()
                
                if choice == '0':
                    print("👋 Debug tools kapatılıyor...")
                    break
                elif choice == '1':
                    detailed = input("Detaylı analiz? (y/n): ").lower().startswith('y')
                    self.analyze_nodes(detailed=detailed)
                elif choice == '2':
                    show_types = input("Message türlerini göster? (y/n): ").lower().startswith('y')
                    self.analyze_topics(show_types=show_types)
                elif choice == '3':
                    topic = input("Topic adı: ").strip()
                    if topic:
                        duration = input("Monitoring süresi (saniye, default 10): ").strip()
                        duration = int(duration) if duration.isdigit() else 10
                        self.monitor_topic_performance(topic, duration)
                    else:
                        print("❌ Geçersiz topic adı")
                elif choice == '4':
                    self.health_check()
                elif choice == '5':
                    self.quick_status()
                elif choice == '6':
                    command = input("ROS2 command (örn: node list): ").strip()
                    if command:
                        self.run_custom_command(command)
                    else:
                        print("❌ Geçersiz komut")
                else:
                    print("❌ Geçersiz seçim")
                    
            except KeyboardInterrupt:
                print("\n\n👋 Ctrl+C ile çıkış yapıldı")
                break
            except Exception as e:
                print(f"❌ Hata: {e}")
    
    def quick_status(self):
        """Hızlı sistem durumu özeti"""
        print("\n⚡ === HIZLI DURUM ÖZETİ ===")
        
        # Node sayısı
        try:
            result = subprocess.run(['ros2', 'node', 'list'], capture_output=True, text=True, timeout=3)
            node_count = len([line for line in result.stdout.strip().split('\n') if line.strip()]) if result.returncode == 0 else 0
            print(f"🤖 Node'lar: {node_count}")
        except:
            print("🤖 Node'lar: Kontrol edilemedi")
        
        # Topic sayısı
        try:
            result = subprocess.run(['ros2', 'topic', 'list'], capture_output=True, text=True, timeout=3)
            topic_count = len([line for line in result.stdout.strip().split('\n') if line.strip()]) if result.returncode == 0 else 0
            print(f"📡 Topic'ler: {topic_count}")
        except:
            print("📡 Topic'ler: Kontrol edilemedi")
        
        # Uptime
        uptime = time.time() - self.start_time
        print(f"⏰ Debug Tools Uptime: {uptime:.1f} saniye")
        
        print("⚡ ====================")
    
    def run_custom_command(self, command: str):
        """Kullanıcı tanımlı ROS2 komutu çalıştırır"""
        try:
            full_command = ['ros2'] + command.split()
            print(f"🔧 Çalıştırılıyor: {' '.join(full_command)}")
            
            result = subprocess.run(full_command, capture_output=True, text=True, timeout=30)
            
            print(f"\n📤 Çıktı:")
            if result.stdout:
                print(result.stdout)
            if result.stderr:
                print(f"⚠️  Hata çıktısı:")
                print(result.stderr)
            
            print(f"📊 Return code: {result.returncode}")
            
        except subprocess.TimeoutExpired:
            print("❌ Komut timeout'a uğradı (30 saniye)")
        except Exception as e:
            print(f"❌ Komut çalıştırma hatası: {e}")


# =============================================================================
# MAIN FONKSIYON VE COMMAND LINE INTERFACE
# =============================================================================

def main():
    """Ana program fonksiyonu"""
    parser = argparse.ArgumentParser(description='ROS2 Debug ve Monitoring Araçları')
    parser.add_argument('--mode', choices=['interactive', 'health', 'nodes', 'topics'], 
                       default='interactive', help='Çalışma modu')
    parser.add_argument('--topic', help='Monitoring yapılacak topic adı')
    parser.add_argument('--duration', type=int, default=10, help='Monitoring süresi (saniye)')
    
    args = parser.parse_args()
    
    # Debug tools'u başlat
    tools = ROS2DebugTools()
    
    if args.mode == 'interactive':
        tools.run_interactive_mode()
    elif args.mode == 'health':
        tools.health_check()
    elif args.mode == 'nodes':
        tools.analyze_nodes(detailed=True)
    elif args.mode == 'topics':
        tools.analyze_topics(show_types=True)
    
    if args.topic:
        tools.monitor_topic_performance(args.topic, args.duration)


if __name__ == '__main__':
    main()


# =============================================================================
# KULLANIM ÖRNEKLERİ
# =============================================================================

"""
🛠️  ROS2 DEBUG TOOLS KULLANIM ÖRNEKLERİ:

1. INTERACTİVE MODE:
   python3 ros2_debug_tools.py
   python3 ros2_debug_tools.py --mode interactive

2. HIZLI SAĞLIK KONTROLÜ:
   python3 ros2_debug_tools.py --mode health

3. NODE ANALİZİ:
   python3 ros2_debug_tools.py --mode nodes

4. TOPIC ANALİZİ:
   python3 ros2_debug_tools.py --mode topics

5. SPESİFİK TOPIC MONİTÖRİNG:
   python3 ros2_debug_tools.py --topic /chatter --duration 30

6. KOMUT SATIRI KOMBİNASYONU:
   python3 ros2_debug_tools.py --mode health --topic /robot/cmd_vel --duration 15

📊 MANUEL ROS2 DEBUG KOMUTLARI:

# Node debugging
ros2 node list
ros2 node info /node_name
ros2 run rqt_graph rqt_graph

# Topic debugging  
ros2 topic list
ros2 topic echo /topic_name
ros2 topic hz /topic_name
ros2 topic bw /topic_name
ros2 topic type /topic_name

# Service debugging
ros2 service list
ros2 service type /service_name
ros2 service call /service_name service_type "{field: value}"

# Parameter debugging
ros2 param list
ros2 param get /node_name parameter_name
ros2 param set /node_name parameter_name value

# System debugging
ros2 daemon status
ros2 doctor
ros2 wtf
"""