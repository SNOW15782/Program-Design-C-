#include <stdio.h>

void DisplayMenu();
float Getprice (char code);
void DisplayPayment ( float payment);

int main()
{
    char movieCode;
    char answer;
    int noTicket;
    float moviePrice;
    float payment;
    float totalpayment =0.0;

    DisplayMenu(); //fx call

    do
    {
    printf ("Enter movie code: ");
    scanf ("%c", & movieCode); //if user enter H

    printf ("Enter number of Ticket: ");
    scanf ("%d", &noTicket); //if user enter 2

    moviePrice = Getprice(movieCode); //fx call from return price

    payment = moviePrice * noTicket;
    printf ("payment : RM%.2f\n", payment);

    totalpayment = totalpayment + payment;
    fflush(stdin);
    printf ("Enter Y to continue : ");
    scanf (" %c", &answer);
    fflush(stdin);
    }
    while (answer == 'Y');

    DisplayPayment (totalpayment); //fx call from display payment

    return 0;
}
void DisplayMenu()
{
    printf ("Code       Movie               Price\n");
    printf ("S or S     Star Wars           (RM12.00)\n");
    printf ("H or h     The Hunger Games    (RM10.00)\n");
    printf ("D or d     The Good Dinosaur   (RM8.00)\n\n");
}

float Getprice (char code)
{
    float price;
    if (code =='S' || code =='s')
        price = 10.00;
    else if (code =='H' || code =='h')
        price = 15.00;
    else if (code =='D' || code =='d')
        price = 8.00;
    else
    {
        printf ("Invalid code.\n");
        price = 0.0;
    }
return price;
}

void DisplayPayment (float payment)
{
printf ("Total Price : RM%.2f\n", payment);
}
