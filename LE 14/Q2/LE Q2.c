#include <stdio.h>
#define size 6 //array element is now constant 6
float get_area(float wdth ,float hght );

struct Area
{
	float width;
	float height;
	float area;
};

int main()
{
    struct Area rectangle [size]; //declare structure //local variable
    int i;

    for (i=0; i<size;i++)
    {
        printf ("Enter width and height : ");
        scanf ("%f %f", &rectangle[i].width,& rectangle[i].height );
        rectangle[i].area = get_area (rectangle[i].width, rectangle[i].height); //fx call x = function
    }

    for (i=0; i<size;i++)
    {
        printf ("Area of rectangle with %.2f by %.2f width and height is %.2f\n", rectangle[i].width, rectangle[i].height, rectangle[i].area);
    }

return 0;
}
float get_area(float width ,float height ) //can be same in int main function //1st element is copy to 1st, so on so on
 {
     float area;
     area = width*height;
     return area; //return
 }
