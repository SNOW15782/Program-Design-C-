/*Question 4
Using the same structure Pet in Question 3, complete the following.
 In the main() function:
     Call function getinfo(), passing structure array cats as parameter.
     Call function display(), passing structure array cats as parameter.

 In function getinfo()
     Get 3 pets’ details from the user.

 In function display()
 Display all 3 pets’ details on the screen. (similar output to Question 3)*/

#include <stdio.h>
#define size 3

struct Pet  //structure declaration
{
char name [50];
int age;
float weight;
};  //End the structure with a semicolon

void getinfo(struct Pet Cats []);
void display(struct Pet Cats []);

void getinfo (struct Pet Cats [])
{
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
}


void display (struct Pet Cats [])
{
 int i;
 for (i=0; i<size; i++)
    {
        printf ("\nPet %d name : %s\n", i+1,Cats[i].name);
        printf ("Pet %d age : %d\n", i+1,Cats[i].age);
        printf ("Pet %d weight : %.2f\n", i+1,Cats[i].weight);
    }

}


int main ()
{
struct Pet Cats[3];
int i;

getinfo (Cats);

printf ("---------------------------------------\n");
printf ("-\t Pet's Information\t-");
printf ("\n---------------------------------------\n");

display (Cats);

return 0;
}

//got error
