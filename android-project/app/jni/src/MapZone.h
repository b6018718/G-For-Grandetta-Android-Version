//
// Created by antho on 22/07/2018.
//

#ifndef ANDROID_PROJECT_MAPZONE_H
#define ANDROID_PROJECT_MAPZONE_H

#pragma once
#include <string>
#include <vector>
#include "Collision.h"
using namespace std;

class MapZone
{
public:
    MapZone(int x, int y, string name);
    ~MapZone();

    int xDim;	//X Size of Map
    int yDim;	//Y Size Of Map
    string name;
    vector <Collision> collisions;
};

#endif //ANDROID_PROJECT_MAPZONE_H
