#include <stdio.h>
#define IRON_PRICE 5.00
int main (void)
{
float price, rate, bill, weight,iron;
char answer;

printf ("--------------------------------------------\n");
printf ("\t Welcome to Clean Laundry\n");
printf ("--------------------------------------------\n");

printf ("Laundry Weight : ");
scanf ("%f", &weight );

fflush(stdin);

printf("Need Ironing? [Y/N]: ");
scanf ("%c", &answer);

if (weight <5.00)
    rate = 1.00;

else if (weight >= 5.00 && weight <10)
    rate = 1.50;

else if (weight >= 10.00 && weight <15)
    rate = 2.00;

else
    rate = 2.50;

if(answer == 'Y' || answer=='y')
    {
    bill = weight * rate + IRON_PRICE;
    iron = IRON_PRICE;
    }
else
{
    bill = weight * rate;
    iron = 0.00;
}

printf ("\nYour bill; \n");
printf ("---------\n");
printf ("Weight : %.2f \n", weight);
printf ("Rate: RM%.2f \n", rate);
printf ("Iron : %c (RM%.2f)\n", answer,iron);
printf ("Bill: RM%.2f \n", bill);


return (0);
}
