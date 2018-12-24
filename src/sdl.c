#include <stdio.h>//import the system library standard input output
#include <SDL/SDL.h>// import the SDL library

/*keep the window open*/
void pause(){   
        int keep = 1;
        SDL_Event event;
        while (keep){
                SDL_WaitEvent(&event);
                switch(event.type){
                case SDL_QUIT:
                        keep = 0;
                }
        }
        return;
}

void sdl_quit(){
	SDL_Quit();
	return;
}

int main(int argc, char *argv[]){
	
	SDL_Surface *screen = NULL;
	SDL_Surface *rectangle = NULL;
    	SDL_Rect position;

    	SDL_Init(SDL_INIT_VIDEO);
    	screen = SDL_SetVideoMode(1200, 800, 32, SDL_HWSURFACE);
    	rectangle = SDL_CreateRGBSurface(SDL_HWSURFACE, 600, 600, 32, 0, 0, 0, 0);
    	SDL_WM_SetCaption("MORPION", NULL);
    	SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 181, 167, 165));
    	position.x = 500;
    	position.y = 100;
    	SDL_FillRect(rectangle, NULL, SDL_MapRGB(screen->format, 255, 255, 255));
    	SDL_BlitSurface(rectangle, NULL, screen, &position);
    	SDL_Flip(screen);
    	pause();
    	SDL_FreeSurface(rectangle);
   	sdl_quit();

    	return 0;
}
