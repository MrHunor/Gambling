#include <SDL3/SDL.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>
#include "Header.h"

//nanosvg for converting number.svg to sizable images
#include <stdio.h>
#include <string>
#include <math.h>
#define NANOSVG_IMPLEMENTATION
#include "nanosvg.h"

using namespace std;

int main(int argc, char* argv[]) {

    SDL_Init(SDL_INIT_VIDEO);
    HWND consoleWindow = GetConsoleWindow();
    SDL_Window* window = SDL_CreateWindow("SDL3", 1000, 1000,  0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);








    SetForegroundWindow(consoleWindow);
    cout << "Hello!\n";
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
