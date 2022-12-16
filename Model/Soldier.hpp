//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_SOLDIER_HPP
#define SOLDIER_SOLDIER_HPP

using namespace std;

#include <string>
#include "Weapon.hpp"

class Soldier {
private:
    Weapon* weapon;
    string name;
public:
    void pickWeapon(Weapon* selected);
    bool dropWeapon();
    void shoot();
    void seeWeapon();
    bool hasWeapon();
};


#endif //SOLDIER_SOLDIER_HPP
