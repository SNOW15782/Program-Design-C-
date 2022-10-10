#include <stdio.h>

float get_min(float rainfall[]);
float get_max(float rainfall[]);
void display(float rainfall[]);

int main()
{
	float rainfall[5]={5.67,10.9,2.03,12.08,7.11};
	float min, max;
	
	min = get_min(rainfall);
	
	max = get_max(rainfall);
	
	display(rainfall);
	
	printf("\n Minimum rain fall : %.2f\n",min);
	printf(" Maximum rain fall : %.2f\n",max);

	return 0;
}

float get_min (float rainfall[])
{
	int x;
	float min;
	
	min = rainfall[0];
	
	for(x=0; x<5; x++)
	{
		if(rainfall[x]<min)
		   min = rainfall[x];
	}
	
	return min;
}

float get_max(float rainfall[])
{
	int x;
	float max;
	
	max = rainfall[0];
	
	for(x=0; x<5; x++)
	{
		if(rainfall[x]>max)
		   max = rainfall[x];
	}
	
	return max;
}

void display(float rainfall[])
{
	int x;
	int count=1;
	
	printf("\n 5 months rain fall statistics.");
	printf("\n ------------------------------");
	
	for(x=0; x<5; x++)
	{
		printf("\n Month %d : %.2f ml",count,rainfall[x]);
		count++;	
	}

}


