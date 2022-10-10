#include <stdio.h>
#include <math.h>
#define SIZE 5

 int main ()
 {
    int number [5];
    float root [5];
    int count;

        while (count<SIZE)
        {
        printf ("Enter an integer number: ");
        scanf ("%d" ,&number[count]);
        printf ("\n");
        count++;
        }

        for (count=0;count<SIZE;count++)
        {
        root[count] = sqrt(number[count]);
        printf ("The Square root of %d is %.2f\n",number[count], root[count]);
        }

return 0;
 }
