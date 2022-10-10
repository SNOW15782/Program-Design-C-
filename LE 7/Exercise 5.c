#include <stdio.h> //non-void function with parameter
char Getgrade(float mark); //fx prototype non-void with parameter

int main()
{
    float studMark;
    char studGrade;
    int counter;

    for (counter = 1; counter <=3; counter++)
    {
        printf ("Enter mark %d: ", counter);
        scanf ("%f", &studMark); //mark store here
        studGrade = Getgrade(studMark);
        printf ("Your grade is: %c\n\n", studGrade);
    }
    return 0;
}

char Getgrade(float mark) //no semi color //header
{
    char grade;
    if (mark >= 80 && mark<=100)
        grade = 'A';

    else if (mark >= 70 && mark<80)
        grade = 'B';

    else
        grade = 'C';

    return grade;
}
