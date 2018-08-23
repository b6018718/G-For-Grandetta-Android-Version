//
// Created by antho on 22/07/2018.
//

#ifndef ANDROID_PROJECT_FONTS_H
#define ANDROID_PROJECT_FONTS_H

#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <stdlib.h>

class Fonts
{
public:
    Fonts();
    ~Fonts();

    TTF_Font* font18;
    TTF_Font* font20;
    TTF_Font* font24;
    TTF_Font* font28;
    TTF_Font* font48;

    SDL_Color foregroundColor = { 255, 255, 255 };
    SDL_Color backgroundColor = { 0, 0, 0 };

    void FreeFonts();
};

#endif //ANDROID_PROJECT_FONTS_H
