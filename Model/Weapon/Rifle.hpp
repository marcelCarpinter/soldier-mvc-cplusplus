//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_RIFLE_HPP
#define SOLDIER_RIFLE_HPP


#include "../Weapon.hpp"

class Rifle: public Weapon {
public:
    Rifle();
    void Shoot() override;
};


#endif //SOLDIER_RIFLE_HPP
