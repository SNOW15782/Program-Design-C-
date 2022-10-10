#include <stdio.h>
#define size 6 //array element is now constant 6

struct Area
{
	float width;
	float height;
	float area;
};

void get_area(struct Area retangle[]);

int main()
{
    struct Area rectangle [size]; //declare structure //local variable
    int i;

    for (i=0; i<size;i++)
    {
        printf ("Enter width and height : ");
        scanf ("%f %f", &rectangle[i].width,& rectangle[i].height);
    }

	get_area(rectangle);

	return 0;
}

void get_area(struct Area rectangle[] )
{
int i;

    for (i=0;i<size;i++)
    {
    (*(rectangle+i)).area = (*(rectangle+i)).width * (*(rectangle+i)).height;
    printf ("Area of rectangle with %.2f by %.2f width and height is %.2f\n",(*(rectangle+i)).width, (*(rectangle+i)).height, (*(rectangle+i)).area);
    }
}
