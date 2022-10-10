#include <stdio.h>

int main()
{
	float mass, acceleration, weight;
	int counter = 1;


	while( counter <= 4 )
	{
    printf("Enter mass: ");
	scanf ("%f",&mass);

	printf("Enter acceleration: ");
	scanf ("%f", &acceleration);
    weight = mass * acceleration;

    printf("The weight is %.2f\n",weight);
    counter++;
	}

	return(0);
}

