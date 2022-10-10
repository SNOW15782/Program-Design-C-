#include <stdio.h>
 int main ()
 {
int a[4] = {2,4,6}; //20, 4 , 13, 22
int *ptr, x=10, y=20, i;

ptr = a; //ptr= &a[0]
ptr[2] = x + (*ptr+1); //10+3 = 13 index {6} changed to {13}
*ptr = y++; [20]
int &z= x;
z = y + 2;
ptr = a;
*(ptr + 3) = *ptr + 2; //20+2 =22, store to index 4 {0} to {22}

for(i = 0; i<4; i++)

//printf
cout<<a[i]<<" ";
cout<<endl;
cout<<x<<" "<<y<<" "<<z<<" "<<endl;

//output 20 4 13 22
       //23 21 23
 }
