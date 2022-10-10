#include <stdio.h>

int main (void)
{
    int number;
    char answer;

    printf("Do you wish to enter a number [Y/N]: ");
    scanf ("%c", &answer);

    while (answer == 'Y')
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("\nYou have entered: %d\n", number);
        fflush(stdin);
        printf("\nDo you wish to enter a number [Y/N]: ");
        scanf ("%c", &answer);
    }

    printf("Thank you. \n");
    return (0);
}
