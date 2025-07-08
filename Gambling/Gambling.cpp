#include <SDL3/SDL.h>
#include <Windows.h>
#include <iostream>
#include "Header.h"
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
