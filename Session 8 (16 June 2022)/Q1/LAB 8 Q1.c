#include<stdio.h>
#define size 1


struct Salary_record{

	int employee_no;
	float basic_salary,EPF,tax,net_salary;
};

void calcNetSalary(struct Salary_record staff[]);

int main()
{
	struct Salary_record staff[size];
	int x;

	for(x=0;x<size;x++)
	{
		printf("Employee %d \n",x+1);
		printf("\tEnter Employee ID : ");
		scanf("%d",&staff[x].employee_no);

		printf("\tEnter employee basic salary : ");
		scanf("%f", &staff[x].basic_salary);
	}

	calcNetSalary(staff);


	printf("-----------");
	for(x=0;x<size;x++)
	{
		printf("\nID : %d\n",staff[x].employee_no);
		printf("Basic : RM%.2f\n",staff[x].basic_salary);
		printf("EPF : RM%.2f\n",staff[x].EPF);
		printf("Tax : %.2f\n",staff[x].tax);
		printf("Net salary : RM%.2f\n",staff[x].net_salary);
	}

	return(0);

}
void calcNetSalary(struct Salary_record staff[])
{
	int x;

	for(x=0;x<size;x++)
	{
		staff[x].EPF=staff[x].basic_salary*0.11;
		if(staff[x].basic_salary>=10000)
			staff[x].tax=staff[x].basic_salary*0.15;

		else if(staff[x].basic_salary>=5000 && staff[x].basic_salary<10000)
			staff[x].tax=staff[x].basic_salary*0.10;

		else if(staff[x].basic_salary>=3000 && staff[x].basic_salary<5000)
			staff[x].tax=staff[x].basic_salary*0.08;

		else
			staff[x].tax=staff[x].basic_salary*0.00;

		staff[x].net_salary=staff[x].basic_salary-staff[x].EPF-staff[x].tax;
	}
}
