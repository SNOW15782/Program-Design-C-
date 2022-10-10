#include <stdio.h>
int main ()
{
    float price;
    char size;

    printf("Enter size: ");
    scanf("%c", &size);

    if (size == 'S'|| 's' )
        price = 15.00;

    else if (size == 'M'|| 'm' )
        price = 17.50;

    else if (size == 'L'|| 'l' )
        price = 19.00;

    else
        printf("Invalid size.\n");

    if((size!='S')&&(size!= 's')&&(size!='M')&&(size!='m')&&(size!='L'&& size!='l'))
        printf("Invalid size\n");

    else
        printf("Price : RM%.2f\n", price);

return (0);
}
