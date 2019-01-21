#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main(void)
{

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window = SDL_CreateWindow("Window test",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		1920,
		1080,
		SDL_WINDOW_BORDERLESS);

	if (!window) {
		printf("Window couldn't open: %s", SDL_GetError());
		return 1;
	}

	SDL_Surface *screenSurface = SDL_GetWindowSurface(window);
	/*
	TTF_Font* ROK = TTF_OpenFont("Rise of Kingdom.ttf", 24);
	SDL_Color White = { 255,255,255 };
	SDL_Renderer *rend = SDL_CreateRenderer(window, 1, 0);
	SDL_Surface* surfaceMessage = TTF_RenderText_Solid(ROK, "Send nudes", White);

	SDL_Texture *message = SDL_CreateTextureFromSurface(rend, surfaceMessage);

	SDL_Rect Message_rect;
	Message_rect.x = 0;
	Message_rect.y = 0;
	Message_rect.w = 100;
	Message_rect.h = 100;

	SDL_RenderCopy(rend, message, NULL, &Message_rect);

	SDL_Delay(100000);

	*/

	for (Uint8 j = 0; j < 1; j++)
	{
		for (Uint8 i = 0; i < 0xFE; i += 2)
		{
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x00, (0xFF - i), i));
			SDL_UpdateWindowSurface(window);
		}
		for (Uint8 i = 0; i < 0xFE; i += 2)
		{
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, i,i, (0xFF - i)));
			SDL_UpdateWindowSurface(window);
		}
		for (Uint8 i = 0; i < 0xFE; i += 2)
		{
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, i, (0xFF - i), i));
			SDL_UpdateWindowSurface(window);
		}
		for (Uint8 i = 0; i < 0xFE; i += 2)
		{
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, (0xFF - i), i,0xFF));
			SDL_UpdateWindowSurface(window);
		}
		for (Uint8 i = 0; i < 0xFE; i += 2)
		{
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0, 0xFF, (0xFF - i)));
			SDL_UpdateWindowSurface(window);
		}
	}

	SDL_DestroyWindow(window);

	SDL_Quit();

	return 0;
}
