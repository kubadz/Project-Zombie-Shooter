//
// Created on 24/05/2018.
//

#ifndef PROJECT_ZOMBIE_SHOOTER_MAINMENU_H
#define PROJECT_ZOMBIE_SHOOTER_MAINMENU_H

#include "MainWindow.h"
#include "GameResources.h"
#include "UI_Button.h"

enum buttonsOptions {
    GAME, MAP_EDITOR, NUMBER_OF_BUTTONS
};

class MainMenu : public MainWindow {
public:
    MainMenu(const MainResources & MainResources);
    ~MainMenu();

private:
    void init() override ;
    void update() override ;
    void draw() override ;

    const MainResources & mainResources;
    UI_Button buttons[NUMBER_OF_BUTTONS];
    sf::Text infoText;
};





#endif //PROJECT_ZOMBIE_SHOOTER_MAINMENU_H