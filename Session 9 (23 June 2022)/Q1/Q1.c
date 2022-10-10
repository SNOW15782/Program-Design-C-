#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char get_status(float);

int main ()
{

FILE *input;
input = fopen("student_file.txt", "r"); //open the file for reading
int id;
char status;
float cgpa;
int f,p,c,d;
int tfail=0, tpass=0, tcredit=0, tdistinction=0;


if(input ==NULL) //if file could not be opened, display file could not be opened
    {
    printf ("File could not be opened.\n");
    exit(1); //0 to terminate 1 is successful
    }
    else
    {
        while (fscanf(input, "%d%f",&id, &cgpa)==2) //2 variable
        {
        status = get_status(cgpa); //call function status and pass the cgpa as parameter.

        if (status == 'F') //count how many students with the result status of fail, pass, credit and distinction using if else
        {
            f = 1;
            tfail = tfail + f;
        }
        else if (status == 'P')
        {
            p = 1;
            tpass = tpass + p;
        }
        else if (status == 'C')
        {
            c = 1;
            tcredit = tcredit + c;
        }

        else
        {
            d = 1;
            tdistinction = tdistinction + d;
        }
     printf("Student ID: %d\n", id); //display ID and result status
     printf ("Status : %c\n", status);
        }
    }

printf ("Student with Fail Status\t : %d\n", tfail); //display the summary of results as shown in the sample output
printf ("Student with Pass Status\t : %d\n", tpass);
printf ("Student with Credit Status\t : %d\n", tcredit);
printf ("Student with Distinction Status\t : %d\n", tdistinction);

fclose(input); //close the file
return 0;
}
char get_status(float cgpa)
{
    char status;

    if (cgpa>=00 && cgpa<2.00) //use if else statement, identify the result status based on the CGPA (refer to the table)

    {
        status = 'F';
    }
    else if (cgpa>=2.00 && cgpa <2.50)
    {
        status = 'P';
    }
    else if (cgpa>=2.50 && cgpa <3.50)
    {
        status = 'C';
    }
    else
    {
        status = 'D';
    }

    return status; //return the status
}


