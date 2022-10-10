#include <stdio.h>
#include <math.h>

char Get_choice ();
void Calculate (int num1,int num2, char choice);
int main()
{
	char choice;
	int num1;
	int num2;
	printf ("A. Add numbers\n");
	printf ("B. Multiply numbers\n");
	printf ("C. Subtract numbers\n");
	printf ("D. Remainder of numbers\n");
	printf ("E. Power of numbers\n");

	choice = Get_choice(); //go back to here when return choice; //fx call //choice is 3

	printf ("Enter two numbers : ");
	scanf("%d%d", &num1, &num2); // if user enter 10 3 , 3

	Calculate (num1, num2, choice); //fx call
}

char Get_choice()
{
	char choice;

	printf ("\nWhat is your choice? : ");
	scanf ("%c", &choice);  // ABCDE is valid, rest is invalid

while (choice!= 'A' && (choice!='B') && (choice!='C') && choice!= 'D' && choice!= 'E') //do the opposite method
{
	fflush(stdin);
	printf ("Your choice is invalid. What is choice?");
	scanf ("%c", &choice);
}
	return choice; //return to choice = get choice  (char)
}


void Calculate (int num1,int num2, char choice) //fx header
{
	int answer;
	switch (choice)
{
	case 'A' : answer = num1 + num2;
	break;

	case 'B' : answer = num1 * num2;
	break;

	case 'C' : answer = num1 - num2;
	break;

	case 'D' : answer = num1 % num2;
	break;

	case 'E' : answer = pow(num1, num2);
	break;
}
	printf ("Answer : %d\n", answer);
}


