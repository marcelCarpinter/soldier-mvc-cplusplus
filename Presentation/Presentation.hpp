//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_PRESENTATION_HPP
#define SOLDIER_PRESENTATION_HPP


#include "../Interface/IView.hpp"
#include "../Model/Soldier.hpp"

class Presentation {
private:
    IView* view = nullptr;
    Soldier* soldier = nullptr;
public:
    Presentation(IView* view);
    map<WeaponType, Weapon *> listWeapons();
    void pickWeapon(Weapon*);
    void seeWeapon();
    void shoot();
    void dropWeapon();
};


#endif //SOLDIER_PRESENTATION_HPP
