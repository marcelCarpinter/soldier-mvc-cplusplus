//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_SHOTGUN_HPP
#define SOLDIER_SHOTGUN_HPP


#include "../Weapon.hpp"

class Shotgun: public Weapon {
public:
    Shotgun();
    void Shoot() override;
};


#endif //SOLDIER_SHOTGUN_HPP
