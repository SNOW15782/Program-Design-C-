#include <stdio.h>
#define size 4

/*Create a structure called Record with attributes type, price, bouquets and bill.
In the main() function:
 Create a structure variable array called flower with 4 elements.
 Ask the user to enter values for name, price and bouquets. Calculate the bill for the
flower purchase.
 Display only the records of purchase quantity above 5 bouquets.
 Display the output as shown below.*/

struct Record   //structure declaration
{
char type [50];
float price;
int bouquet;
float bill;
};  //End the structure with a semicolon

int main ()
{
    struct Record flower[4];
    int i;

    for (i=0;i<size;i++)
    {
        printf("Enter flower's %d type : ", i+1);
        scanf ("%s", flower[i].type);
        //gets (flower[i].type); //gets function to do name spacing

        printf("Enter flower's %d price : RM ", i+1);
        scanf ("%f", &flower[i].price);

        printf("Enter flower's %d bouquet : ", i+1);
        scanf ("%d", &flower[i].bouquet);

        printf("\n");

        flower[i].bill = flower[i].price * flower[i].bouquet; //operator to calculate flower
    }

printf ("---------------------------------------\n");
printf ("-\t PURCHASE OF MORE THAN 5\t-");
printf ("\n---------------------------------------\n");

    for (i=0;i<size;i++) //1. loop
    {
        if (flower[i].bouquet > 5)
        {
        printf ("Name : %s\n", flower[i].type);
        printf ("Bill :RM %.2f\n", flower[i].price);

            printf("\n");
        }
    }
return 0;
}
