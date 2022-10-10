//Final Draft
//Muhamad Arif Bin Sallehuddin 1211206128
//Lab 5 Q4


#include <stdio.h>
float calculateCharges (int h_in, int h_out, int min_in, int min_out);
void display(float);


int main ()
{
int h_in;
int h_out;
int min_in;
int min_out;
int time;
float charges;

    printf ("Time in (HH)   : ");
    scanf ("%d",&h_in);
    printf ("Time in (MM)   : ");
    scanf ("%d",&min_in);
    printf ("Time out (HH)   : ");
    scanf ("%d",&h_out);
    printf ("Time in (MM)   : ");
    scanf ("%d",&min_out);

    charges = calculateCharges (h_in, h_out,min_in,min_out);
    display(charges);

return 0;
}

float calculateCharges (int h_in, int h_out, int min_in, int min_out)
{
int hours;
int mins;
float charges;

if (min_out < min_in)
{
    hours = h_out - 1 - h_in;
    mins = min_out + 60 - min_in;
}
else
{
    hours = h_out - h_in;
    mins = min_out - min_in;
}
printf ("You have parked for %d hour(s) and %d minute (s)",hours, mins);

if (hours >=3)
{
    charges = 1.50+ ((hours - 3 )*1.00);
    if (mins>0)
    charges = charges + 1.00;
}
else
    charges =1.50;
    return charges;
}

void display(float charges)
{
printf ("\nTotal charges = $%.2f", charges);
}
