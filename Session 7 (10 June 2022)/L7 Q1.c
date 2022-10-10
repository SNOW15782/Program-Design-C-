#include <stdio.h>

void get_marks (float [4][3]); //4 student 3 quizzes //fx prototype
void display (float [4]); //fx prototype

int main ()
{
 float mark [4][3]; //4 student 3 quizzes
 int x;
 int y;
 float total [4]={0};
 float average[4]={0};
 get_marks (mark); //function get_marks

    for(x=0; x<4; x++) //loop 4 times for student
    {
        y=0; //initialize
        while (y<3) //compare //loop 3 times for quizzes
        {
            total[x] = total[x] + mark[x][y]; //calculate total marks
            y++; //update
        }

    average[x] = total[x] / 3; //divide 3 because total quiz is 3
 }
    display (average); //fx call
}

void get_marks (float mark [4][3])
{
int x;
int y;

    for (x=0; x<4; x++) //loop 4 times for student
{
    printf ("\nStudent %d:\n", x+1); //0+1 = 1 so start at 1
    for (y=0; y<3; y++) // loop 3 times for quizzes
    {
    printf ("Enter quiz %d marks : ", y+1); //0+1 = 1 so start 1
    scanf ("%f", &mark[x][y]); //put function mark here in array
    }
}
}

void display (float average [])
{
int x;
    for (x=0; x<4; x++)
{
    printf ("\nStudent %d average ==> %.2f",x+1 ,average[x]); //0+1 = 1 so start 1
}
}
