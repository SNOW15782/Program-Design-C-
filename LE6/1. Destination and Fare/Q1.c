#include <stdio.h>
int main (void)
{
    int destination, age; // 1- declare
    float price, fare, total_price=0.0;
    char answer;

    //later printf list

    printf("Enter Destination: "); //2- Enter text  //choose 1-2-3
    scanf ("%d", &destination);

    switch(destination) //3- Declare switch
    {
    case 1:
        printf ("You have chosen Kota Kinabalu.\n");
        printf("The basic fare is RM 300.\n");
        fare = 300.00;
        break;

    case 2:
        printf ("You have chosen Kuching.\n");
        printf("The basic fare is RM 200.\n");
        fare = 200.00;
        break;

    case 3:
        printf ("You have chosen Bandung.\n");
        printf("The basic fare is RM 400.\n");
        fare = 400.00;
        break;
    }
    do // 4- Declare do-while loop + if-else statement
        {
    printf ("\nEnter age: ");
    scanf ("%d", &age);

        if (age<7) // 6 or lower
            price = fare - (0.30 * fare);

        else if (age>54) //55 or older
            price = 0.50 * fare;

        else
        price = fare; //if none proceed

    printf("Fair is RM %.2f \n", price);

    total_price = total_price + price;

    fflush(stdin);

    printf("Add group member <Y-Yes N-No> :");
    scanf ("%c", &answer);
        }
        while(answer == 'Y');

    printf("\nTotal fare is : RM%.2f\n", total_price); //total everything

return (0);
}
