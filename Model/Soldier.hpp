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
    void dropWeapon();
    void shoot();
    void seeWeapon();
};


#endif //SOLDIER_SOLDIER_HPP
