#include <stdio.h>
int main ()
{
int num = 34;
int *p1, *p2, x=12, y, i;
p1 = &x;
y = *p1 * 2;
p2 = &num;
int &z = y;
num = z + 4;
*p1 = y++ + 3;

cout<<x<<" "<<y<<" "<<z<<" "<<" "<<*p1<<endl;
}

