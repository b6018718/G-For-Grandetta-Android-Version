//
// Created by antho on 22/07/2018.
//

#ifndef ANDROID_PROJECT_QUESTPOINT_H
#define ANDROID_PROJECT_QUESTPOINT_H

#pragma once
#include <string>
using namespace std;

class questPoint
{
public:
    questPoint(string des1, string des2);
    ~questPoint();

    string des1;
    string des2;
};

#endif //ANDROID_PROJECT_QUESTPOINT_H
