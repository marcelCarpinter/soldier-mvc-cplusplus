//
// Created by Marcel on 8/12/2022.
//

#include <iostream>
#include "Soldier.hpp"

void Soldier::pickWeapon(Weapon* selected) {
    weapon = selected;
}

void Soldier::seeWeapon() {
    std::cout << weapon->getName() << std::endl;
}

void Soldier::shoot(){
    weapon->Shoot();
}

void Soldier::dropWeapon() {
    weapon = nullptr;
}