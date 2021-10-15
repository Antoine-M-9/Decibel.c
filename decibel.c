#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string playlist, Artist1, Artist1Title1, Artist1Title2,
           Artist2, Artist2Title1, Artist2Title2;
}
decibel;

int main(int argc, char *argv[15])
{
    decibel song[4];
    song[0].playlist = "Classical";
    song[0].Artist1 = "Frédéric Chopin";
    song[0].Artist1Title1 = "Suite Bergamasque";
    song[0].Artist1Title2 = "Nocturne";
    song[0].Artist2 = "Bethoven";
    song[0].Artist2Title1 = "Moonlight Sonata";
    song[0].Artist2Title2 = "Prelude in C Major";

    song[1].playlist = "Electro";
    song[1].Artist1 = "Flume";
    song[1].Artist1Title1 = "Drop the Game";
    song[1].Artist1Title2 = "Some Minds";
    song[1].Artist2 = "The Blaze";
    song[1].Artist2Title1 = "Territory";
    song[1].Artist2Title2 = "Breath";

    song[2].playlist = "Rock";
    song[2].Artist1 = "Pink Floyd";
    song[2].Artist1Title1 = "Money";
    song[2].Artist1Title2 = "Shine On You Crazy Diamond";
    song[2].Artist2 = "Supertramp";
    song[2].Artist2Title1 = "The logical Song";
    song[2].Artist2Title2 = "Don't Leave Me Now";

    song[3].playlist = "Rap";
    song[3].Artist1 = "Eminem";
    song[3].Artist1Title1 = "Lose Yourself";
    song[3].Artist1Title2 = "Without Me";
    song[3].Artist2 = "DA Uzi";
    song[3].Artist2Title1 = "La vie de Bobby";
    song[3].Artist2Title2 = "Crois-moi";

    printf("Welcome to your new music app => Décibel ! \n");
    printf("What style of music would you like to listen to? \n");
    while (argv[0] != NULL)
    {
        for (int i = 0; i < 4; i ++)
        {
            printf("%s, ", song[i].playlist);
        }
        printf("\n Playlist choice: ");
        scanf("%s", argv[0]);
        if (strcmp(argv[0], "Classical") == 0 || strcmp(argv[0], "classical") == 0)
        {
            printf("You have the choice between these two virtuosos \n");
            printf("%s où %s \n Artist choice: ", song[0].Artist1, song[0].Artist2);
            scanf("%s", argv[0]);
            if (strcmp(argv[0], "Frédéric Chopin") == 0 || strcmp(argv[0], "Chopin") == 0 || strcmp(argv[0], "chopin") == 0)
            {
                printf("Very good choice, 2 songs available to you \n");
                printf("%s où %s \n Song choice: ", song[0].Artist1Title1, song[0].Artist1Title2);
                scanf("%s", argv[0]);
                printf("Appuyer sur play afin de jouer le morceau, passer un agréable moment ! \n");
                return 0;
            }
            else if (strcmp(argv[0], "Bethoven") == 0 || strcmp(argv[0], "bethoven") == 0)
            {
                printf("Very good choice, 2 songs available to you \n");
                printf("%s où %s \n Song choice: ", song[0].Artist2Title1, song[0].Artist2Title2);
                scanf("%s", argv[0]);
                printf("Appuyer sur play afin de jouer le morceau, passer un agréable moment ! \n");
                return 0;
            }
        }
        else if (strcmp(argv[0], "Electro") == 0 || strcmp(argv[0], "electro") == 0)
        {
            printf("You have the choice between these two Artist \n");
            printf("%s où %s \n Artist choice: ", song[1].Artist1, song[1].Artist2);
            scanf("%s", argv[0]);
            if (strcmp(argv[0], "Flume") == 0 || strcmp(argv[0], "flume") == 0)
            {
                printf("Very good choice, two songs available to you \n");
                printf("%s où %s \n Song choice: ", song[1].Artist1Title1, song[1].Artist1Title2);
                scanf("%s", argv[0]);
                printf("Press play to start the song, have a good time! \n");
                return 0;
            }
            else if (strcmp(argv[0], "The Blaze") == 0 || strcmp(argv[0], "the blaze") == 0 || strcmp(argv[0], "blaze") == 0)
            {
                printf("Very good choice, 2 songs available to you \n");
                printf("%s où %s \n Song choice: ", song[1].Artist2Title1, song[1].Artist2Title2);
                scanf("%s", argv[0]);
                printf("Press play to start the song, have a good time \n");
                return 0;
            }
        }
        else if (strcmp(argv[0], "Rock") == 0 || strcmp(argv[0], "rock") == 0)
        {
            printf("You have the choice between these two big Rockers \n");
            printf("%s où %s \n Artist choice: ", song[2].Artist1, song[2].Artist2);
            scanf("%s", argv[0]);
            if (strcmp(argv[0], "Pink Floyd") == 0 || strcmp(argv[0], "pink floyd") == 0)
            {
                printf("Very good choice, two songs available to you \n");
                printf("%s où %s \n Song choice: ", song[2].Artist1Title1, song[2].Artist1Title2);
                scanf("%s", argv[0]);
                printf("Press play to start the song, have a good time! \n");
                return 0;
            }
            else if (strcmp(argv[0], "Supertramp") == 0 || strcmp(argv[0], "supertramp") == 0)
            {
                printf("Very good choice, 2 songs available to you \n");
                printf("%s où %s \n Song choice: ", song[2].Artist2Title1, song[2].Artist2Title2);
                scanf("%s", argv[0]);
                printf("Press play to start the song, have a good time! \n");
                return 0;
            }
        }
        else if (strcmp(argv[0], "Rap") == 0 || strcmp(argv[0], "rap") == 0)
        {
            printf("You have the choice between these two Rapper \n");
            printf("%s où %s \n Artist choice: ", song[3].Artist1, song[3].Artist2);
            scanf("%s", argv[0]);
            if (strcmp(argv[0], "Eminem") == 0 || strcmp(argv[0], "eminem") == 0)
            {
                printf("Very good choice, 2 songs available to you \n");
                printf("%s où %s \n Song choice: ", song[3].Artist1Title1, song[3].Artist1Title2);
                scanf("%s", argv[0]);
                printf("Appuyer sur play afin de jouer le morceau, passer un agréable moment ! \n");
                return 0;
            }
            else if (strcmp(argv[0], "DA Uzi") == 0 || strcmp(argv[0], "da uzi") == 0)
            {
                printf("Very good choice, 2 songs available to you \n");
                printf("%s où %s \n Song choice: ", song[3].Artist2Title1, song[3].Artist2Title2);
                scanf("%s", argv[0]);
                printf("Appuyer sur play afin de jouer le morceau, passer un agréable moment ! \n");
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}