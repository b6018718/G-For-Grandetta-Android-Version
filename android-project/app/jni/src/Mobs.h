//
// Created by antho on 22/07/2018.
//

#ifndef ANDROID_PROJECT_MOBS_H
#define ANDROID_PROJECT_MOBS_H

#pragma once
#include <string>
#include "Player.h"
#include "Screen.h"
#include "Fonts.h"
#include "Music.h"
using namespace std;

class Mobs
{
public:
    Mobs();
    ~Mobs();

    struct mob
    {
        string enemyName;
        int maxHP;
        int physicalAttack;
        int magicalAttack;
        int physicalDefence;
        int magicDefence;
        int expDrop;
        int itemDrop;
        int AI;
        string imgSrc;
        int goldDrop;
        bool boss = false;
        int hp;
    };

    /////////////////////////////MOBS///////////////////////////////

    mob mobRat;
    mob mobBat;
    mob mobGoblin;
    mob mobGoblinMage;
    mob mobYoungGoblin;
    mob mobSpider;
    mob mobGiantSpider;
    mob mobCockroach;
    mob mobRatGroup;
    mob mobGuard;
    mob mobGuardMage;
    mob mobRabidDog;
    mob mobGoblinBoss;
    mob mobSpiderQueen;
    mob mobWizard;
    mob mobDemonLord;

    ////////////////////////ENEMY CREATION FUNCTIONS

    int getRandomInt(int min, int max);
    void generateEnemyStats(mob& mob);
    mob determineMonster(int mapZone);

    void mobWeakAttack(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobStrongAttack(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobTackle(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobSwordSlash(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobCastFreeze(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobCastFire(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobCastThunder(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobBreathFire(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobBegMercy(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobTryToRun(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobReason(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobUltimateGNova(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);
    void mobHeal(Player& player, Screen screen, Fonts fonts, Music music, mob& enemy);
    void mobPotion(Player& player, Screen screen, Fonts fonts, Music music, mob& enemy);
    void mobStickyWeb(Player& player, Screen screen, Fonts fonts, Music music, mob enemy);

    void selectMonsterMove(Player& player, Screen screen, Fonts fonts, Music music, mob& enemy);
    void enemyOpeningMessage(Screen screen, mob enemy, Player player, Fonts fonts);
    void enemyDefeatMessage(Screen& screen, mob enemy, Player& player, Fonts fonts);
    void enemyTurn(Player& player, Screen screen, Fonts fonts, Music music, mob& enemy);


    int calculateDamageDealt(int attack, int defence);
    int calculateEnemyHeal(int heal, mob monster);

};

#endif //ANDROID_PROJECT_MOBS_H
