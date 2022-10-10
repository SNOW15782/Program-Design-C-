#include <stdio.h>
 //not sure

 int main ()
{
int arr [4][3] = {{1,2,3,4},{1,2,3}};
int x;
int y;

for (x=0; x<4; x++) //if x is true, go to y
{
    for (y=0; y<3; y++) //if y is true, output [][]
    {
        printf("%d ", arr [x][y]); //answer
    }

    printf ("\n");
 }
 return 0;
 }
