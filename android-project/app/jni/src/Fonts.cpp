//
// Created by antho on 22/07/2018.
//

#include "Fonts.h"
#include "SDL.h"
#include "sdl_mixer.h"
#include "SDL_TTF.h"
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <stdlib.h>
Fonts::Fonts()
{

    font18 = TTF_OpenFont("font/PressStart2P-Regular.ttf", 18);
    if (!font18) {
        SDL_Log("TTF_OpenFont: %s\n", TTF_GetError());
        // handle error
    }

    font20 = TTF_OpenFont("font/PressStart2P-Regular.ttf", 20);
    if (!font20) {
        SDL_Log("TTF_OpenFont: %s\n", TTF_GetError());
        // handle error
    }

    font24 = TTF_OpenFont("font/PressStart2P-Regular.ttf", 24);
    if (!font24) {
        SDL_Log("TTF_OpenFont: %s\n", TTF_GetError());
        // handle error
    }

    font28 = TTF_OpenFont("font/PressStart2P-Regular.ttf", 28);
    if (!font28) {
        SDL_Log("TTF_OpenFont: %s\n", TTF_GetError());
        // handle error
    }

    font48 = TTF_OpenFont("font/PressStart2P-Regular.ttf", 48);
    if (!font48) {
        SDL_Log("TTF_OpenFont: %s\n", TTF_GetError());
        // handle error
    }
}


Fonts::~Fonts()
{
}

void Fonts::FreeFonts()
{
    TTF_CloseFont(font18);
    TTF_CloseFont(font20);
    TTF_CloseFont(font24);
    TTF_CloseFont(font28);
    TTF_CloseFont(font48);
}
