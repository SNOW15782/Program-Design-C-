#include <stdio.h>

int main()
{
    float revenue, cost;
    int counter = 1;

while (counter <= 3)
{
    printf("Enter Revenue: ");
    scanf("%f",&revenue);

    printf("Enter cost: ");
    scanf ("%f",&cost);

if (revenue > cost)
    {
        printf("Profit\n", counter);
    }

    else
   {
    printf("Loss\n");
   }

counter++;
}
return (0);
}
