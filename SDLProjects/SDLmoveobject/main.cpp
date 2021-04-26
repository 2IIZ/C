#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>



int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *zozor = NULL;
    SDL_Rect positionZozor;
    SDL_Event event;
    int continuer = 1;

    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE); /* Double Buffering */
    SDL_WM_SetCaption("Gestion des évènements en SDL", NULL);

    zozor = SDL_LoadBMP("zozor.bmp");
    SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255));

    positionZozor.x = ecran->w / 2 - zozor->w / 2;
    positionZozor.y = ecran->h / 2 - zozor->h / 2;

    SDL_EnableKeyRepeat(10, 10); /* Activation de la répétition des touches */

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)  // Event of Keyboard
                {
                    case SDLK_UP:
                        positionZozor.y--;
                        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 255, 255));
                        break;
                    case SDLK_DOWN:
                        positionZozor.y++;
                        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 0, 255));
                        break;
                    case SDLK_RIGHT:
                        positionZozor.x++;
                        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 0));
                        break;
                    case SDLK_LEFT:
                        positionZozor.x--;
                        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
                        break;
                }
                break;
            case SDL_MOUSEMOTION:
                positionZozor.x = event.motion.x;  // zozor suit la souris
                positionZozor.y = event.motion.y;
                SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
                break;
            case SDL_MOUSEBUTTONUP:
                if (event.button.button == SDL_BUTTON_RIGHT) /* On arrête le programme si on a fait un clic droit */
                    continuer = 0;
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (event.button.button == SDL_BUTTON_LEFT) /* On blit zozor */ // zozor suit la souris
                    positionZozor.x = event.button.x;
                    positionZozor.y = event.button.y;
                    SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);
                    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
                break;
            case SDL_RESIZABLE:
                SDL_SetVideoMode(event.resize.w, event.resize.h, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);
                break;
        }


        SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);
        SDL_Flip(ecran);
    }

    SDL_FreeSurface(zozor);
    SDL_Quit();

    return EXIT_SUCCESS;
}
