//
// Created by Marcel on 8/12/2022.
//

#include <iostream>
#include "Soldier.hpp"

void Soldier::pickWeapon(Weapon* selected) {
    weapon = selected;
}

void Soldier::seeWeapon() {
    if( hasWeapon() ){
        std::cout << weapon->getName() << std::endl;
    }
    else{
        std::cout << "No tiene un arma en este momento" << std::endl;
    }
}

void Soldier::shoot(){
    if( hasWeapon() ){
        weapon->Shoot();
    }
    else{
        std::cout << "No hay arma a utilizar" << std::endl;
    }
}

bool Soldier::dropWeapon() {
    if(hasWeapon()){
        weapon = nullptr;
        return true;
    }
    return false;
}

bool Soldier::hasWeapon() {
    return weapon != nullptr;
}
