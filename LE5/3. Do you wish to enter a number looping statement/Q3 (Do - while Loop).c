#include <stdio.h>

int main (void)
{
    int number;
    char answer;


    do
    {
        printf("\nDo you wish to enter a number [Y/N]: ");
        scanf ("%c", &answer);

        if(answer=='Y')
        {
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("You have entered: %d\n", number);
        fflush(stdin);
        }

    }
    while (answer == 'Y');

    printf("Thank you. \n");
    return (0);
}
