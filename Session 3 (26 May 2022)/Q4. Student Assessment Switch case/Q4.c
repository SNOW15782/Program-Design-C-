#include <stdio.h>
#include <string.h>

int main (void)
{
    char assessment_code;
    float quiz_mark_total, quiz1, quiz2, quiz, assignment_marks, assessment;

    printf("Enter type of Assessment ");
    scanf (" %c", &assessment_code);

    switch (assessment_code)
    {
    case 'Q':
    case 'q':

    printf ("Enter Quiz 1 and Quiz 2 marks: ");
    scanf ("%f%f", &quiz1,&quiz2);

    printf ("Assessment Type : Quiz");
    fflush (stdin);
    quiz_mark_total = quiz1 + quiz2;
    printf ("Quiz total : %f", quiz_mark_total);
    break;

    case 'A':
    case 'a':

    printf ("\nEnter assignment marks : ");
    scanf ("%f", &assignment_marks);
    printf ("\nAssessment Type: Assignments");


    if (assignment_marks == 0 && assignment_marks <50)
    printf ("\nRe-do Assignment");

    else if (assignment_marks >=50 && assignment_marks <70)
    printf ("\nGood");

    else if (assignment_marks >=70 && assignment_marks <=100)
    printf ("\nExcellent");

    else
    printf("\nNot available");

    }
return 0;
}
