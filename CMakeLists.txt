cmake_minimum_required(VERSION 3.24)
project(Soldier)

set(CMAKE_CXX_STANDARD 23)

add_executable(Soldier main.cpp Interface/IView.hpp View/View.cpp View/View.hpp Model/Soldier.cpp Model/Soldier.hpp Model/Weapon/Rifle.cpp Model/Weapon/Rifle.hpp Model/Weapon/Revolver.cpp Model/Weapon/Revolver.hpp Model/Weapon/Shotgun.cpp Model/Weapon/Shotgun.hpp Model/Weapon.cpp Model/Weapon.hpp Presentation/Presentation.cpp Presentation/Presentation.hpp Enum/WeaponType.hpp)
