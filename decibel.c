#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string playlist, Artist1, Artist1Title1, Artist1Title2,
           Artist2, Artist2Title1, Artist2Title2; 
}
decibel; // le nom de ma structure

int main(int argc, char *argv[15])
{ 
    decibel song[4]; // 
    
    song[0].playlist = "Classical"; // Je créer mes 4 playlists différentes. 
    song[0].Artist1 = "Frédéric Chopin"; // Avec le nom des artistes ect;
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

    printf("Welcome to your new music app => Décibel ! \n"); // phrase d'introduction
    printf("What style of music would you like to listen to? \n");
    while (argv[0] != NULL) // Tant que l'argument est différent de NULL on continue le code sinon on recommance le code
    {
        for (int i = 0; i < 4; i ++) // boucle for qui me permet de présenter les 4 playlists
        {
            printf("%s, ", song[i].playlist);
        }
        printf("\n Playlist choice: "); // On demande quel playlist souhaite choisir l'utilisateur
        scanf("%s", argv[0]); // scanf permet de poser la question et de stocker la réponce
        if (strcmp(argv[0], "Classical") == 0 || strcmp(argv[0], "classical") == 0) // si argument est = à "Classical où classical"
        { // alors le code continue de s'exécuter
            printf("You have the choice between these two virtuosos \n"); // on imprime un texte 
            printf("%s où %s \n Artist choice: ", song[0].Artist1, song[0].Artist2); // on montre les 2 artistes
            scanf("%s", argv[0]); // on pose la question puis on la récupère
            if (strcmp(argv[0], "Frédéric Chopin") == 0 || strcmp(argv[0], "Chopin") == 0 || strcmp(argv[0], "chopin") == 0) // comme précédemment
            {
                printf("Very good choice, 2 songs available to you \n");
                printf("%s où %s \n Song choice: ", song[0].Artist1Title1, song[0].Artist1Title2);
                scanf("%s", argv[0]);
                printf("Appuyer sur play afin de jouer le morceau, passer un agréable moment ! \n");
                return 0; // retourne 0 signifie que tout s'est bien passé
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
        else if (strcmp(argv[0], "Electro") == 0 || strcmp(argv[0], "electro") == 0) // Sinon si la playlist choisie est = "Electro où electro"
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
        else if (strcmp(argv[0], "Rock") == 0 || strcmp(argv[0], "rock") == 0) // sinon si la playlist choisie est = "Rock où rock";
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
                return 1; // on retourne 1 pour dire qu'il y a eu un problème
            }
        }
    }
}
