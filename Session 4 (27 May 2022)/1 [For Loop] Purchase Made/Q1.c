#include <stdio.h>
int main (void)
{
    char product_name[50];
    float price, total_price=0.0;
    int count;

    for (count=1;count<=3;count++)
    {
    printf("\nEnter product's name:    ");
    scanf ("%s", product_name);
    fflush(stdin);

    printf("Enter Price:RM ");
    scanf ("%f", &price);

    printf ("\n%s: RM%.2f", product_name, price);

    total_price = total_price + price;
    }
    printf ("\nTotal amount: %.2f", total_price);
//total = total +price
}
