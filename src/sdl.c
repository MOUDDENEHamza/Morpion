#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

void pause(){
        int keep = 1;
        SDL_Event event;

        while (keep){
                SDL_WaitEvent(&event);
                switch(event.type){
                        case SDL_QUIT:
                                keep = 0;

                        case SDL_MOUSEBUTTONUP:
                                if (event.button.button == SDL_BUTTON_LEFT)
                                        if((event.button.x  > 500 && event.button.x < 1100 ) && (event.button.y  > 100 && event.button.y < 700))
                                                printf("%d\t%d\n", event.button.x, event.button.y);

                }
        }

        return;
}

int main(int argc, char *argv[]){
        SDL_Surface *screen = NULL;
        SDL_Surface *text = NULL;
        SDL_Surface *background = NULL;
        SDL_Surface *board = NULL;
        SDL_Rect p_background;
        SDL_Rect p_board;
        SDL_Rect position;
	TTF_Font *police = NULL;
        p_background.x = 0;
        p_background.y = 0;
        p_board.x = 500;
        p_board.y = 100;
        SDL_Color couleurNoire = {0, 0, 0};
        SDL_Init(SDL_INIT_VIDEO);
        TTF_Init();
        SDL_WM_SetIcon(IMG_Load("../documents/board.jpg"), NULL);
        screen = SDL_SetVideoMode(1200, 800, 32, SDL_HWSURFACE);
        SDL_WM_SetCaption("MORPION", NULL);

        background = IMG_Load("../documents/background.jpg");

        /* Chargement de la police */
    police = TTF_OpenFont("angelina.ttf", 65);
    /* Écriture du texte dans la SDL_Surface texte en mode Blended (optimal) */
    text = TTF_RenderText_Blended(police, "Salut les Zér0s !", couleurNoire);
        while (1)
    {

        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));

        position.x = 0;
        position.y = 0;
        SDL_BlitSurface(background, NULL, screen, &position); /* Blit du fond */

        position.x = 60;
        position.y = 370;
        SDL_BlitSurface(text, NULL, screen, &position); /* Blit du texte */
        SDL_Flip(screen);
    }

        SDL_BlitSurface(background, NULL, screen, &p_background);

        board = IMG_Load("../documents/board.jpg");
        SDL_BlitSurface(board, NULL, screen, &p_board);

        SDL_Flip(screen);
        pause();
        TTF_CloseFont(police);
    	TTF_Quit();

    	SDL_FreeSurface(text);
        SDL_FreeSurface(background);
        SDL_FreeSurface(board);
        SDL_Quit();

        return 0;
}
