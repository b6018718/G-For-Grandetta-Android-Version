//
// Created by antho on 22/07/2018.
//

#ifndef ANDROID_PROJECT_CASINO_H
#define ANDROID_PROJECT_CASINO_H

#pragma once
#include "Screen.h"
#include "Player.h"
#include "Fonts.h"
#include "Equipment.h"
class Casino
{
public:
    Casino();
    ~Casino();

    bool wheelOfFortune(Screen& screen, Player& player, Fonts& fonts, Equipment equipment);
    bool fruitMachine(Screen& screen, Player& player, Fonts& fonts, Equipment equipment);
    bool rouletteTable(Screen& screen, Player& player, Fonts& fonts, Equipment equipment);


private:
    //Wheel of fortune = 0, fruit machine = 1, roulette table = 2
    void drawWheelOfFortune(Screen& screen, Player& player, int shopCursorPos, Fonts& fonts);
    void playWheelOfFortune(Player& player, int bet, Screen& screen, Fonts& fonts);
    void wheelOfFortuneMenu(Player& player, int cursor, bool& quit, Screen& screen, Fonts& fonts);
    void playFruitMachine(Player& player, Screen& screen, Fonts& fonts);
    void drawFruitMachine(Screen& screen, Player& player, int shopCursorPos, Fonts& fonts);
    void drawRoutetteTable(Screen& screen, Player& player, int shopCursorPos, Fonts& fonts);
    void playRouletteTable(Player& player, string bet, Screen& screen, Fonts& fonts);
    bool shopEvent(Player& player, Screen& screen, int shop, Fonts fonts, Equipment equipment);
    void moveLeft(int& combatCursorPos, int& shop);
    void moveRight(int& combatCursorPos, int& shop);
    void moveUp(int& combatCursorPos, int& shop);
    void moveDown(int& combatCursorPos, int& shop);
    int getRandomInt(int min, int max)
    {
        return rand() % (max - min + 1) + min;
    };
};


#endif //ANDROID_PROJECT_CASINO_H
