#include <stdio.h>
float GetSalary(); //fx prototype
void DisplayGrade (float salary);

int main()
{
    float salary;
    salary = GetSalary();//fx call
    DisplayGrade(salary); //fx call
    return 0;
}

float GetSalary()
{
    float sal;
    printf ("Enter monthly salary: ");
    scanf ("%f", &sal); //4000 will be store in sal
    return sal;
}

void DisplayGrade(float monthsal)
{
    if (monthsal < 5000)
        printf ("Grade 40\n");

    else if (monthsal < 10000)
         printf ("Grade 43\n");

    else
        printf ("Grade 54\n");

    return;
}
