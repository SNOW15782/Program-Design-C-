#include <stdio.h>
#define size 3

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
    printf ("Enter cat's %d name \t: ", i+1); //loop 3 times
    scanf ("%s", Cats[i].name);

    printf ("Enter cat's %d age \t: ", i+1);
    scanf ("%d",&Cats[i].age);

    printf ("Enter cat's %d weight \t: ", i+1);
    scanf ("%f,", &Cats[i].weight);

     printf("\n");
}


printf ("---------------------------------------\n");
printf ("-\t Pet's Information\t-");
printf ("\n---------------------------------------\n");

for (i=0; i<size; i++)
{
    printf ("\nPet %d name : %s\n", i+1,Cats[i].name);
    printf ("Pet %d age : %d\n", i+1,Cats[i].age);
    printf ("Pet %d weight : %.2f\n", i+1,Cats[i].weight);
}


return 0;
}
