#include <stdio.h>
#define CM_TO_INCHES 0.394

void get_Input ();
void cm_to_Inches (float cm);

int main (){
char answer;
do{
	fflush(stdin);
	get_Input();
	printf ("Do you want to continue? : ");
	scanf(" %c", &answer);

}
	while (answer == 'Y');
	printf ("Program Ends");
    return 0;
}


void get_Input(){
float cm;

	printf ("Enter value in cm : ");
	scanf ("%f", &cm);
    cm_to_Inches (cm);
}

void cm_to_Inches (float cm)
{
	printf("%.2f cm is equals to %.2f inches\n", cm, cm*CM_TO_INCHES);
	return;
}
