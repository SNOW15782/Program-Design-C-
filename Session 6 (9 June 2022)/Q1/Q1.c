#include <stdio.h>
#define INCH 2.54

int main()
{

    float cm [5];
    float inch [5];
    int count;

for (count=0; count<5; count++) //loop to 5 times

    {
    printf("Enter value in inches : ");
    scanf ("%f" ,&inch[count]);
    cm[count] = INCH * inch[count];
    }


    printf("\nHere are the results of the conversion.\n");
    printf("\n---------------------------------------\n");

for (count=0; count<5; count++)

    {
    printf ("%.2f inch(es) ===> %.2f cm(s)\n", inch[count], cm[count]);
    }

    return 0;
}
