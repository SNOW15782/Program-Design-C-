#include <stdio.h>

int Func1 (int, int); //fx prototype
void Func2 (int);

void main ()
{
int x = 5;
int y = 10;
int z = 2, result = 0;

result = z + Func1(x,y); //fx call //2 + func1 (5,10) z(2) + 5 = 7 will be printed

printf ("result is : %d\n", result);
Func2 (result); //void don't have return function //find func2 now
}
int Func1 (int a, int b) //fx define + header // int a become 5, int b become 10 it belong to func1
{
    return (b-a); //10-5 = 5
}
void Func2 (int a) // a is now 7 because it belong to func2
{
    int b=3; //b = 3
    printf (" %d\n %d\n", a, a*b); //first int will be 7,
}

