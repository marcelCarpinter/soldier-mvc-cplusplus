//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_REVOLVER_HPP
#define SOLDIER_REVOLVER_HPP


#include "../Weapon.hpp"

class Revolver: public Weapon {
public:
    Revolver();
    void Shoot() override;
};


#endif //SOLDIER_REVOLVER_HPP
