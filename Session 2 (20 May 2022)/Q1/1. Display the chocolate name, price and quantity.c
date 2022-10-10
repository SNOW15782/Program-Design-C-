//Muhamad Arif Bin Sallehuddin
//Student id:
#include <stdio.h>
#include <string.h>
#define chocolate_price 1.30

int main()
{
    int quantity = 5;
    float total_amount;
    char name [50];
    strcpy(name, "John");

    total_amount = quantity * chocolate_price;

    printf("chocolate price is: $%.2f.\n", chocolate_price);
    printf("%s bought %d units of chocolate.\n",name, quantity);
    printf("Total amount to pay: $%.2f\n", total_amount);

    return (0);
}
