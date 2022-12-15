//
// Created by Marcel on 8/12/2022.
//

#include <iostream>
#include "Presentation.hpp"
#include "../Model/Weapon/Revolver.hpp"
#include "../Model/Weapon/Shotgun.hpp"
#include "../Model/Weapon/Rifle.hpp"

Presentation::Presentation(IView* view) : view(view), soldier(new Soldier())
{
}

map<WeaponType, Weapon *> Presentation::listWeapons() {
    auto revolver = new Revolver();
    auto rifle = new Rifle();
    auto shotgun = new Shotgun();

    return std::map<WeaponType, Weapon*> {
            { WeaponType::Revolver, revolver},
            { WeaponType::Rifle,    rifle },
            { WeaponType::Shotgun,  shotgun },
    };
}

void Presentation::pickWeapon(Weapon* w){
    soldier->pickWeapon(w);
}

void Presentation::seeWeapon(){
    soldier->seeWeapon();
}