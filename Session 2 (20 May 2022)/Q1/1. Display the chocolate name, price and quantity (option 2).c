//Muhamad Arif Bin Sallehuddin
//Student id:
#include <stdio.h>
#define chocolate_price 1.30

int main()
{
    int quantity;
    float total_amount;
    char name [50];

    printf("Enter your name:    ");
    scanf("%s", name);

    printf("Enter quantity:     ");
    scanf("%d", quantity);

    total_amount = quantity * chocolate_price;

    printf("%s bought %d units of chocolate. \nThe total amount: $%.2f\n",name, quantity, total_amount);

    return (0);
}
