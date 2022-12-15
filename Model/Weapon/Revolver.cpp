//
// Created by Marcel on 8/12/2022.
//

#include <iostream>
#include "Revolver.hpp"

void Revolver::Shoot() {
    std::cout << "Bam bam" << std::endl;
}

Revolver::Revolver() {
    this->name = "Revolver";
}
