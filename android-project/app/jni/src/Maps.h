//
// Created by antho on 22/07/2018.
//

#ifndef ANDROID_PROJECT_MAPS_H
#define ANDROID_PROJECT_MAPS_H

#pragma once
#include "MapZone.h"
#include <vector>
using namespace std;

class Maps
{
public:
    Maps();
    ~Maps();
    vector <MapZone> zone;

    int findCollision(MapZone mapZone, string name);
    void removeItem(int map, string name);

};

#endif //ANDROID_PROJECT_MAPS_H
