#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>
#include "SDL/SDL_image.h"


void pause();

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *zozor = NULL, *sapin = NULL;
    SDL_Rect positionFond, positionZozor, positionSapin;

    positionFond.x = 0;
    positionFond.y = 0;
    positionZozor.x = 500;
    positionZozor.y = 260;
    positionSapin.x = 600;
    positionSapin.y = 300;
    // positionZozor.x = 800/2-95/2; j'ai bien aimer mon truc de fu
    //positionZozor.y = 600/2-84/2;


    SDL_Init(SDL_INIT_VIDEO);

    /* Chargement de l'icône AVANT SDL_SetVideoMode */
     SDL_WM_SetIcon(SDL_LoadBMP("pack_images_sdz/sdl_icone.bmp"), NULL);
    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Chargement d'images en SDL", NULL);


    /* Chargement d'une image Bitmap dans une surface */
    imageDeFond = SDL_LoadBMP("pack_images_sdz/lac_en_montagne.bmp");
    zozor = SDL_LoadBMP("pack_images_sdz/zozor.bmp");
    SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format,0,0,255));

      /* Chargement d'un PNG avec IMG_Load
    Celui-ci est automatiquement rendu transparent car les informations de
    transparence sont codées à l'intérieur du fichier PNG */
    sapin = IMG_Load("sapin.png"); // avec SDL_image


    /* On blitte par-dessus l'écran */
    SDL_BlitSurface(sapin, NULL, ecran, &positionSapin);
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
    SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);

    SDL_Flip(ecran);
    pause();

    SDL_FreeSurface(imageDeFond); /* On libère la surface */
    SDL_Quit();

    return EXIT_SUCCESS;
}

void pause()
{
    int continuer = 1;
    SDL_Event event;

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
