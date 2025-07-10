#!/usr/bin/env python3
# =============================================================================
# DOSYA: launch/first_world.py
# AMAÇ: Day7 zengin first_world simülasyonunu başlatma
# KULLANIM: ros2 launch day7 first_world.py
# ÖĞRENME: Zengin SDF world, multiple objects, physics
# =============================================================================

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():
    """
    Zengin first_world simülasyonu - 5 farklı nesne + duvarlar
    """
    
    # First world dosyası yolu
    world_file = PathJoinSubstitution([
        FindPackageShare('day7'),        # day7 paketi
        'worlds',                        # worlds alt dizini
        'first_world.sdf'                # Zengin world dosyası
    ])
    
    return LaunchDescription([
        # Gazebo simulator ile zengin dünyayı başlat
        ExecuteProcess(
            cmd=['gz', 'sim', world_file],
            output='screen'
        )
    ])
