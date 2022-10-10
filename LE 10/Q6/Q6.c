#include <stdio.h>
#include <math.h>
#define SIZE 4

 int main ()
 {
    float array[5];
    int count;
    float max;
    float min;
    float average;

        while (count<SIZE)
        {
        printf ("Enter quiz %d marks : ", count+1);
        scanf ("%f" ,&array[count]);
        count++;
        }

    max = array[0];
    for (count=1;count<SIZE;count++)
    {
        if(array[count]>max)
        {
        max = array[count];
        }
    }
    printf ("Maximum quiz marks is %.2f\n", max);



    min = array[0];
    for (count=1;count<SIZE;count++)
    {
        if(array[count]<min)
        {
        min = array[count];
        }
    }
    printf ("Minimum quiz marks is %.2f\n", min);

    for (count=1; count<SIZE; count++)
    {
        average = (array[0]+array[1]+array[2]+array[3]) / SIZE;
    }
        printf ("Average quiz marks is %.2f\n", average);


return 0;
 }
