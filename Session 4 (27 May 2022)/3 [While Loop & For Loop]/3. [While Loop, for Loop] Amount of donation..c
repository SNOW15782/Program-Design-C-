#include <stdio.h>
int main (void)
{
char answer, name[50];
int counter, frequency, no_Client = 0;
float donation, total_donate, total_All=0.0;

    printf("Donation from client? [Enter Y to Continue] : ");
    scanf (" %c", &answer);

    while (answer == 'Y')
    {
        printf ("Enter Client name: ");
        scanf (" %s", name);
        printf ("Enter frequency donation: ");
        scanf ("%d", &frequency);

        for (counter = 1; counter <=frequency; counter++) //frequency is set by user
        {
            printf ("Enter amount donation: ");
            scanf ("%f", &donation);
            total_donate = total_donate + donation; //operator to get total_donate
        }
        printf ("\nTotal donation from %s : RM%.2f\n", name, total_donate);
        total_All= total_All + total_donate;
        no_Client++;
        fflush(stdin);
        printf ("Donation from client? : ");
        scanf (" %c", &answer);
    }
printf ("Total client: %d\n", no_Client);
printf ("Total Donation: RM%.2f", total_All);

return (0);
}
