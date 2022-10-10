#include <stdio.h>
int main ()
{
    float price;
    char size;

    printf("Enter size: ");
    scanf("%c", &size);

    switch(size)
    {
        case 'S':
        case 's':
        price = 15.00;
        break;

        case 'M':
        case 'm':
        price = 17.90;
        break;

        case 'L':
        case 'l':
        price = 19.00;
        break;
    }

    if (price == 0.0)
        printf("Invalid size \n");
    else
        printf("Price : RM%.2f\n", price);
 return (0);
}
