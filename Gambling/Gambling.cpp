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
	TTF_Font* font = TTF_OpenFont("Poppins.ttf", 50);
	SDL_Color black = { 0, 0, 0, 255 };
	SDL_Color white = { 255,255,255,0 };
    SDL_Surface* zeroSurface = TTF_RenderText_Solid(font, "0", 1, white);
	SDL_Surface* oneSurface = TTF_RenderText_Solid(font, "1", 1, white);
	SDL_Surface* twoSurface = TTF_RenderText_Solid(font, "2", 1, white);
	SDL_Surface* threeSurface = TTF_RenderText_Solid(font, "3", 1, white);
	SDL_Surface* fourSurface = TTF_RenderText_Solid(font, "4", 1, white);
	SDL_Surface* fiveSurface = TTF_RenderText_Solid(font, "5", 1, white);
    SDL_Surface* sixSurface = TTF_RenderText_Solid(font, "6", 1, white);
	SDL_Surface* sevenSurface = TTF_RenderText_Solid(font, "7", 1, white);
	SDL_Surface* eightSurface = TTF_RenderText_Solid(font, "8", 1, white);
	SDL_Surface* nineSurface = TTF_RenderText_Solid(font, "9", 1, white);
	SDL_Texture* zeroTexture = SDL_CreateTextureFromSurface(renderer, zeroSurface);
	SDL_Texture* oneTexture = SDL_CreateTextureFromSurface(renderer, oneSurface);
	SDL_Texture* twoTexture = SDL_CreateTextureFromSurface(renderer, twoSurface);
	SDL_Texture* threeTexture = SDL_CreateTextureFromSurface(renderer, threeSurface);
	SDL_Texture* fourTexture = SDL_CreateTextureFromSurface(renderer, fourSurface);
	SDL_Texture* fiveTexture = SDL_CreateTextureFromSurface(renderer, fiveSurface);
	SDL_Texture* sixTexture = SDL_CreateTextureFromSurface(renderer, sixSurface);
	SDL_Texture* sevenTexture = SDL_CreateTextureFromSurface(renderer, sevenSurface);
	SDL_Texture* eightTexture = SDL_CreateTextureFromSurface(renderer, eightSurface);
	SDL_Texture* nineTexture = SDL_CreateTextureFromSurface(renderer, nineSurface);
	SDL_RenderTexture(renderer, zeroTexture, NULL, NULL);
	SDL_RenderPresent(renderer);
	SDL_Delay(10000);
    SetForegroundWindow(consoleWindow);
    cout << "Hello!\n";
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
