#include <stdio.h>

float get_min(float rainfall[]);
float get_max (float rainfall[]);
void display (float rainfall[]);

int main ()
{
float rainfall [5] = {5.67, 10.9, 2.03, 12.08, 7.11};
float min;
float max;

//declare function here;
min = get_min (rainfall);
max = get_max (rainfall);

display(rainfall);

printf("\n Minimum rain fall : %.2f ml\n",min);
printf(" Maximum rain fall : %.2f ml\n",max);

return 0;
}

float get_min(float rainfall[]) //{5.67, 10.9, 2.03, 12.08, 7.11};
{
    float min;
    int x;

    min=rainfall [0]; //5.67

    for (x=0; x<5; x++)
        {
        if(rainfall[x] < min) //if rainfall lesser than index [0], go to min rainfall [x]
        min = rainfall[x]; //min = 2.03
        }

    return min;
}

float get_max (float rainfall[])//{5.67, 10.9, 2.03, 12.08, 7.11};
{
    float max;
    int x;

    max= rainfall [0]; //5.67
    for (x=0; x<5; x++)
        {
        if(rainfall[x] > max) //if rainfall more than index [0], go to max rainfall [x]
        max = rainfall[x]; //max = 12.08
        }

        return max;
}


void display (float rainfall[])
{
 int x;
 int count=1;

printf("\n 5 months rain fall statistics.");
printf("\n ------------------------------");

    for (x=0 ; x<5 ; x++)
    {
        printf ("\n Month %d : %.2f ml",count,rainfall[x]);
        count++;
    }
}
