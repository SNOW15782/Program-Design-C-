#include <stdio.h>

int x = 337;
void Q (int z)
{
  z += x;
  print(z);

}
void P(int *y)
{
    int x = *y + 8;
    Q(x);
    *y = x - 3 * x;
}
void print(int val)
{
    printf("\n%d", val);
}
void main ()
{
    x = 5;
    P(&x); //5
    print(x);
}
//18, -26
