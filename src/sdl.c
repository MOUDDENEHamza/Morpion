#include <stdio.h>//import the system library standard input output
#include <SDL/SDL.h>// import the SDL library

/*initialize SDL. create and display a window*/
void sdl_init(){
	SDL_Surface *screen = NULL;
        SDL_Init(SDL_INIT_VIDEO);
        screen = SDL_SetVideoMode(640, 480, 32, SDL_RESIZABLE);
        SDL_WM_SetCaption("MORPION", NULL);
	return;
}

/*color the window with the choosen color*/
void sdl_color(){
	return;
}

/*keep the window open*/
void pause(){   
        int keep = 1;
        int continuer = 1;
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
	SDL_Surface *ecran = NULL;
    	SDL_Init(SDL_INIT_VIDEO);
    	ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
    	SDL_WM_SetCaption("MORPION", NULL);
    	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 181, 167, 165));
    	SDL_Flip(ecran);
    	pause();
    	sdl_quit();
    	return 0;
}

