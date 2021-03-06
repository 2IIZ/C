#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL;
    SDL_Event event; /* La variable contenant l'�v�nement */
    int continuer = 1; /* Notre bool�en pour la boucle */

    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Gestion des �v�nements en SDL", NULL);

    while (continuer) /* TANT QUE la variable ne vaut pas 0 */
    {
        SDL_WaitEvent(&event); /* On attend un �v�nement qu'on r�cup�re dans event */
        switch(event.type) /* On teste le type d'�v�nement */
        {
            case SDL_QUIT: /* Si c'est un �v�nement QUITTER */
                continuer = 0; /* On met le bool�en � 0, donc la boucle va s'arr�ter */
                break;
            case SDL_KEYUP: /* Si appui sur une touche */
                switch (event.key.keysym.sym)
                {
                    case SDLK_ESCAPE: /* Appui sur la touche Echap, on arr�te le programme */
                    continuer = 0;
                    break;
                }
            break;
        }
    }

    SDL_Quit();

    return EXIT_SUCCESS;
}
