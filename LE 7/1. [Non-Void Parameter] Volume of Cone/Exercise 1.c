#include <stdio.h>
float get_volume (float r, float h); //fx prototype //non-void parameter

int main ()
{
float radius, height, volume; //fx call
const float PI=3.142;

printf ("Enter radius and height: ");
scanf ("%f%f", &radius, &height);

volume = get_volume (radius, height);

printf ("Radius : %.2f\n", radius);
printf ("Height : %.2f\n", height);
printf ("volume : %.2f\n", volume);
}

float get_volume (float r, float h) //fx definition+header
{
   const float PI=3.142;
   float vol;
   vol = (PI * r * r * h)/3;
   return vol;
}
