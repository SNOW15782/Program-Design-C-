#include <stdio.h>
#define ANNUAL_FEE 0.05
int main (void)
{
    char name [50], student_ID [50];
    int study_duration, count=1;
    float fee, total_fee;

   //enter name
   printf ("Enter name: ");
   gets(name);

   //enter id no
    printf ("Enter ID: ");
    scanf("%s", &student_ID);

    fflush(stdin);

    //fee for the first year
    printf ("Enter fee (RM): ");
    scanf ("%f",&fee);
    fflush(stdin);

    // duration of study
    printf ("Enter duration of study (years): ");
    scanf ("%d",&study_duration);

    printf ("-----------\n");
    printf ("MULTIMEDIA UNIVERSITY\n");
    printf ("-----------\n");

    printf ("\nStudent name : %s", name);
    printf ("\nStudent ID: %s", student_ID);
    printf ("\nduration of study: %d", study_duration);
    printf ("\nYear   Course Fee");
    do
    {
    total_fee = total_fee + fee;
    printf ("\n%d   RM%.2f", count, fee);
    fee = fee+fee*0.05;
    count++;
    }
    while (count <= study_duration);

printf ("\n-------------\n");
    printf ("Total Course Fees: RM %.2f", total_fee);
printf ("\n-------------\n");

    return (0);
}




//do-while loop
//calculate the annual fee for each year
// calculate the total course fees
