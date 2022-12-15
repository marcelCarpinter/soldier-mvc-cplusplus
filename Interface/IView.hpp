//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_IVIEW_HPP
#define SOLDIER_IVIEW_HPP

using namespace std;

#include <string>
#include <map>
#include "../Enum/WeaponType.hpp"
#include "../Model/Weapon.hpp"

class IView {
public:
    virtual ~IView() = default;
    virtual void showText(const std::string& text) = 0;
    //virtual void setWeaponMenuItems(const map<WeaponType, Weapon*>& items) = 0;
};


#endif //SOLDIER_IVIEW_HPP
