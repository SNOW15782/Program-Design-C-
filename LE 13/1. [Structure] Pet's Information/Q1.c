#include <stdio.h>

struct Pet  //structure declaration
{
char name [50];
int age;
float weight;
};  //End the structure with a semicolon

int main ()
{
struct Pet Cats;

printf ("Enter cat's name \t: ");
scanf ("%s", Cats.name);

printf ("Enter cat's age \t: ");
scanf ("%d",&Cats.age);

printf ("Enter cat's weight \t: ");
scanf ("%f,", &Cats.weight);

printf ("---------------------------------------\n");
printf ("-\t Pet's Information\t-");
printf ("\n---------------------------------------\n");

printf ("Pet name : %s\n", Cats.name);
printf ("Pet age : %d\n", Cats.age);
printf ("Pet weight : %.2f\n", Cats.weight);

return 0;
}
