//
// Created by Marcel on 8/12/2022.
//

#include <iostream>
#include "Rifle.hpp"

void Rifle::Shoot() {
    std::cout << "Pum pum pum" << std::endl;
}

Rifle::Rifle() {
    this->name = "Rifle";
}
