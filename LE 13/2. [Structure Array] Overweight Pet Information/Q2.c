#include <stdio.h>
#define size 2
struct Pet  //structure declaration
{
char name [50];
int age;
float weight;
};  //End the structure with a semicolon

int main ()
{
struct Pet Cats[3];

int i;

for (i=0; i<size; i++)
{
    printf ("Enter cat's name \t: ");
    scanf ("%s", Cats[i].name);

    printf ("Enter cat's age \t: ");
    scanf ("%d",&Cats[i].age);

    printf ("Enter cat's weight \t: ");
    scanf ("%f,", &Cats[i].weight);

    printf("\n");
}

printf ("\n---------------------------------------\n");
printf ("-\t OVERWEIGHT PET INFORATION\t-");
printf ("\n---------------------------------------\n");

for (i=0; i<size; i++)
{
    printf ("\nPet name : %s\t\n", Cats[i].name);
    printf ("Pet age : %d\t\n", Cats[i].age);
    printf ("Pet weight : %.2fkg\t\n", Cats[i].weight);

    printf("\n");
}

return 0;
}
