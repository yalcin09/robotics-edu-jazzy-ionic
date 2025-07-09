🎯 GÜN 5: Launch Files ve Parameters
📚 TEORİK BİLGİ: Launch Files ve Parameters
🤔 Launch Files Nedir?
Launch file'lar ROS2'de birden fazla node'u aynı anda başlatmak, parametreleri ayarlamak ve node'lar arası konfigürasyonu yönetmek için kullanılan Python ya da XML dosyalarıdır. Sanki bir orkestra şefi gibi, tüm müzisyenleri (node'ları) koordine eder.
🤔 Parameters Nedir?
Parameter'lar çalışma zamanında node'ların davranışlarını değiştirmemizi sağlayan konfigürasyon değerleridir. Sanki TV'nin uzaktan kumandasındaki ayarlar gibi - ses, parlaklık, kanal gibi değerleri kod değiştirmeden ayarlayabilirsiniz.
🎯 Neden Kullanırız?
Launch Files İçin:

⚙️ Otomasyon: 50 node'u tek tek başlatmak yerine tek komutla çalıştırma
🔄 Tekrarlanabilirlik: Aynı sistemi her seferinde aynı şekilde başlatma
📋 Merkezi Yönetim: Tüm sistem konfigürasyonunu tek dosyada toplama
🧪 Test Senaryoları: Farklı test durumları için farklı launch file'lar

Parameters İçin:

🛠️ Dinamik Konfigürasyon: Kodu yeniden derlemeden ayarları değiştirme
🎛️ Fine-tuning: Robot davranışını gerçek zamanlı optimize etme
🔄 Yeniden Kullanılabilirlik: Aynı node'u farklı görevler için kullanma
📊 A/B Testing: Farklı parameter setleriyle performans karşılaştırma

🌍 Gerçek Dünya Örnekleri:
Launch Files:

🏭 Fabrika Robotu: Kamera, LiDAR, manipulator, planner node'larını birlikte başlatma
🚗 Otonom Araç: Perception, localization, planning, control sistemlerini senkronize başlatma
🏠 Ev Robotu: Navigasyon, temizlik, güvenlik modüllerini koordineli çalıştırma

Parameters:

🏎️ Hız Limitleri: Güvenlik bölgelerinde robot hızını düşürme
📸 Kamera Ayarları: Işık koşullarına göre exposure, gain değerlerini değiştirme
🎯 PID Tuning: Farklı yük koşullarında kontrol parametrelerini optimize etme
🗺️ SLAM Hassasiyeti: Açık alan vs kapalı alan için farklı mapping parametreleri

🔗 Diğer Konularla İlişkisi:

Publisher/Subscriber: Launch file'lar topic isimlerini parametre olarak ayarlar
Services/Actions: Node'ların hangi servisleri kullanacağını launch'da belirleriz
URDF/Robot Description: Robot modelini parametre olarak launch'a geçiririz
Gazebo: Simülasyon dünyasını ve robot parametrelerini launch'da yapılandırırız