//
// Created by Marcel on 8/12/2022.
//

#ifndef SOLDIER_VIEW_HPP
#define SOLDIER_VIEW_HPP


#include "../Interface/IView.hpp"
#include "../Presentation/Presentation.hpp"

using namespace std;

#include <string>

class View: public IView {
private:
    Presentation* m_presenter;
    std::map<WeaponType, Weapon*> weaponsList;
    Weapon* weaponSelected;
    void showMainMenu();
    void readOption(const char* option, bool& exitCondition);
public:
    View();
    ~View() override;
    void takeWeaponMenu();
    void showText(const std::string& text) override;
    //void setWeaponMenuItems(const std::map<WeaponType, Weapon*>& items) override;
    void selectWeapon(const string &option, bool &isValidOption);
};


#endif //SOLDIER_VIEW_HPP
