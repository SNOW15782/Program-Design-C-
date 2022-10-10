#include <stdio.h>
#define size 2
#include <string.h>
struct Airforce
{
    char name[50];
    int age;
    float salary;
    char rank [50];
};
void getRank (struct Airforce *M);
int main ()
{
    struct Airforce member [3];
    int i;

    for (i=0;i<size;i++)
    {
        fflush (stdin);
        printf ("Name : ");
        gets (member[i].name); //can do spacing using gets

        printf ("Age : ");
        scanf ("%d", &member[i].age );

        printf ("Salary : ");
        scanf ("%f", &member[i].salary);

        getRank (&member[i]); //fx call

        printf ("Rank : %s\n", member[i].rank);
    }
return 0;
}

void getRank (struct Airforce *M) // the Member of each record as reference.
{
    int i;
    if((*M).salary > 10000)
        strcpy ((*M).rank, "Marshall");

    else if((*M).salary > 7000 && (*M).salary <= 10000)
        strcpy ((*M).rank, "General");

    else
        strcpy ((*M).rank, "Colonel");
}
