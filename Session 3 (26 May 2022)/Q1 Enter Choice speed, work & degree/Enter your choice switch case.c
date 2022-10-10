#include <stdio.h>
#define GRAVITY 9.8
int main (void)
{
int choice;
float distance, time, speed, mass, height, work,radian, degree;

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
    case 1 :
        printf("Enter distance  : ");
        scanf("%f", &distance);

        printf("Enter time  : ");
        scanf("%f", &time);

        speed = distance / time;
        printf("The speed is : %.2f m/s \n", speed);
        break;

case 2:
    printf("Enter mass: ");
    scanf ("%f", &mass );

    printf ("Enter height: ");
    scanf ("%f", &height);

    printf ("Work is %.2f Joules\n", work = mass * GRAVITY * height);
    break;

case 3:
    printf ("Enter value in radian: ");
    scanf ("%f", &radian);
    degree = radian * 57.2958;

    printf ("%.2f radian is equal to %.2f", radian, degree);
    break;

default :
    printf("You have entered invalid code.\n");
    printf("Program will terminate. \n");
}

return (0);
}
