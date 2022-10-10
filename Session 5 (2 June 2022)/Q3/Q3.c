#include <stdio.h>
#include <string.h>
int  get_credit_hour (char sub_code[10]);
void display_records (char subject_code[10], int credithour, float total_fee);
int main()
{

int no_subject;
char subject_code[10];
int credithour;
int count;
int sub_code;
float total_fee;
float total_fee_all =0.0;


    printf ("How many subject to register : ");
    scanf ("%d", &no_subject); //user key in 5

while (no_subject >3)

{
fflush(stdin);
    printf ("Maximum number to register is 3 subjects. Please key-in again.\n");
    printf ("How many subject to register : ");
    scanf ("%d", &no_subject); //if user key in 5
}

for(count =1; count<= no_subject; count++)
{
    printf("subject #%d\n", count);
    fflush (stdin);
    printf ("Enter the subject code     :");
    scanf ("%s", &subject_code);
    credithour = get_credit_hour (subject_code);
    total_fee = 150 * credithour;
    display_records (subject_code, credithour,total_fee);
    total_fee_all = total_fee_all + total_fee;
}
    printf("Total fee to be paid : RM%.2f\n", total_fee_all);
return 0;
}

int get_credit_hour (char sub_code[10])
{
   int credithour;

    if (strcmp(sub_code, "DCS5038")==0)
    {
     credithour = 4;
    }
    else if (strcmp(sub_code, "DET5078")==0)
    {
     credithour = 3;
    }
    else if (strcmp(sub_code, "DPR5038")==0)
    {
     credithour = 2;
    }

    return credithour;
}

void display_records (char subject_code[10], int credithour, float total_fee)
{
    printf ("Subject Code %s\n" ,subject_code);
    printf ("Credit Hour %d\n" ,credithour);
    printf ("Total Fee %.2f\n" ,total_fee);
}
