//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_WEAPON_HPP
#define SOLDIER_WEAPON_HPP

using namespace std;

#include <string>

class Weapon {
public:
    string name;
    virtual void Shoot() = 0;
    std::string getName();
};


#endif //SOLDIER_WEAPON_HPP
