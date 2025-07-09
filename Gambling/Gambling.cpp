#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3_image/SDL_image.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>
#include "Header.h"

//nanosvg for converting number.svg to sizable images
#include <stdio.h>
#include <string>
#include <math.h>
#define NANOSVG_IMPLEMENTATION

using namespace std;

int main(int argc, char* argv[]) {

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    HWND consoleWindow = GetConsoleWindow();
    SDL_Window* window = SDL_CreateWindow("SDL3", 1000, 1000,  0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);


	SDL_Texture* texture = IMG_LoadTexture(renderer, "number.svg");
    SDL_Texture* one_texture = ExtractSubTexture(renderer, texture, { 0, 0,31,38 });
	SDL_Texture* two_texture = ExtractSubTexture(renderer, texture, { 38, 0,31,38 });
    SDL_Texture* three_texture = ExtractSubTexture(renderer,texture, {72,0,31,38})


    SetForegroundWindow(consoleWindow);
    cout << "Hello!\n";
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
