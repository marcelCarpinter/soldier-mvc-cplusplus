//
// Created by Marcel on 8/12/2022.
//

#include <iostream>
#include "View.hpp"

View::View() {
    m_presenter = new Presentation(this);
    showMainMenu();
}

View::~View()
{
    delete m_presenter;
}

void View::showText(const string &text) {
    std::cout << text << std::endl;
}

void View::showMainMenu() {
    std::string option;
    bool exitCondition = false;

    do
    {
        std::system("cls");
        showText("-== Bienvenido al campo de entrenamiento, Soldado ==-");
        showText("Elige una accion");
        showText("");
        showText("1- Recoger Arma");
        showText("2- Dejar Arma");
        showText("3- Disparar");
        showText("4- Ver Arma en uso");
        showText("X- Salir");
        std::cin >> option;
        readOption(option.c_str(), exitCondition);
        showText("");
        std::cin.get();
    } while (!exitCondition);

}

void View::readOption(const char* option, bool& exitCondition)
{
    auto str_option = std::string(option);

    if (str_option == "1")
    {
        takeWeaponMenu();
        exitCondition = false;
    }
    else if (str_option == "2")
    {
        std::cin.get();
        exitCondition = false;
    }
    else if (str_option == "3")
    {
        std::cin.get();
        exitCondition = false;
    }
    else if (str_option == "4")
    {
        m_presenter->seeWeapon();
        exitCondition = false;
    }
    else if (str_option == "x" || str_option == "X")
    {
        std::cout.flush();
        exit(EXIT_SUCCESS);
    }
    else
    {
        showText("INVALID_OPTION_MESSAGE");
        std::cin.get();
        exitCondition = false;
    }
}

void View::takeWeaponMenu() {
    std::string optionString = "";
    bool isValidOption = true;
    do
    {
        showText("Por favor, escoja el arma que desea utilizar:");
        showText("");

        weaponsList = m_presenter->listWeapons();

        for (const auto& item : weaponsList)
        {
            Weapon* weapon = item.second;
            auto numberOfItem = (int)item.first;
            std::string index = std::to_string(numberOfItem + 1);
            std::string weaponName = weapon->getName();
            cout << index << " - " << weaponName << endl;
        }

        showText("X - Cancelar");
        std::cin >> optionString;
        selectWeapon(optionString.c_str(), isValidOption);
        //std::cin.get();
    } while (!isValidOption);

    showMainMenu();
}

void View::selectWeapon(const string& option, bool& isValidOption){
    if(!weaponsList.empty()){
        showText(option);
        int index = stoi(option) - 1;
        if( index >= 0 && index < 3){
            isValidOption = true;
            for (const auto& item : weaponsList)
            {
                auto weaponIndex = (int)item.first;
                if ( weaponIndex == index) {
                    weaponSelected = item.second;
                    break;
                }
            }
            m_presenter->pickWeapon(weaponSelected);
        }
    }
}