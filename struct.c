#include <stdio.h>
#include <stdlib.h>

    struct infomovie
    {
        char moviename[20];
        char management[20];
        int price;
        float imdb;
    };

    int main()
    {
        struct infomovie im={"Interstellar","Nolan",60,8.7};

        printf("Name of the movie: %s\n",im.moviename);
        printf("Name of the management: %s\n",im.management);
        printf("Price of the movie: %d\n",im.price);
        printf("Imdb point of the movie: %.2f\n",im.imdb);

        return 0;
    }