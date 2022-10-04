#include <stdio.h>
#include <string.h>
void View_Genre();
int Vote();
void View_Result (int, int, int);
void Exit (int, int, int);

int main ()
{
int option;
int genrecode;
int trackrock=0,trackpop=0,trackcountry=0;
int rock=1,pop=1,country=1;

printf ("WELCOME TO MUSIC GENRE VOTING SYSTEM\n");
printf ("1) View Genre\n");
printf ("2) Vote\n");
printf ("3) View Result\n");
printf ("4) Exit\n\n");

do
{
 printf ("\nInput Option : ");
 scanf ("%d",&option);

 switch (option)
    {
    case 1 : View_Genre();
    break;

    case 2: genrecode=Vote();

        if (genrecode == 11)
        {
        trackrock = trackrock + rock;
        }

        else if (genrecode == 22)
        {
        trackpop = trackpop + pop;
        }

        else if (genrecode == 33)
        {
        trackcountry = trackcountry + country;
        }
        break;

        case 3: View_Result(trackrock, trackpop, trackcountry);
        break;

    case 4: Exit(trackrock, trackpop, trackcountry);
    }

}while (option == 1 || option == 2 || option == 3);

printf ("\n\nThank You");

return 0;
}

void View_Genre()
{
printf ("Genre\t Code\n");
printf ("Rock\t 11\n");
printf ("Pop\t 22\n");
printf ("Country\t 33\n");

 return;
}

int Vote()
{
int genrecode;

printf ("Input Code : ");
scanf ("%d", &genrecode);

        if (genrecode == 11)
        {
       printf ("Your favourite genre is Rock\n");
        }

        else if (genrecode == 22)
        {
        printf ("Your favourite genre is Pop\n");
        }

        else if (genrecode == 33)
        {
        printf ("Your favourite genre is Country\n");
        }

return genrecode;
}

void View_Result(int ntrackrock, int ntrackpop,int ntrackcountry)
{
    printf("\nGenre\tVote\n");
    printf("Rock\t%d\n", ntrackrock);
    printf("Pop\t%d\n", ntrackpop);
    printf("Country\t%d\n", ntrackcountry);
    return;
}
void Exit (int ntrackrock, int ntrackpop,int ntrackcountry)
{

char popular [50];

    if(ntrackrock!=0 || ntrackpop!=0 || ntrackcountry!=0)
    {
        if(ntrackrock > ntrackpop)

        {

            if(ntrackrock > ntrackcountry)
            {
            strcpy(popular, "Rock");
            }

            else
            {
                strcpy(popular, "Country");
            }
        }

        else if (ntrackpop > ntrackcountry)
            {
            strcpy(popular, "Pop");
            }

        else
            {
            strcpy(popular, "Country");
            }
        printf ("The most popular music genre is : %s\n ", popular);

    }
    else
    {
    printf ("You have not vote any genre.\n");
    }

}
