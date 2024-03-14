//14Q.Write a program to accept Employee Id , Department No, Designation from user and display
//output with reference to following tables

#include<stdio.h>
int main(void)
{
	int empId;
	int deptno;
	char dc;
	printf("Enter the employed Id:");
	scanf("%d",&empId);
	printf("Enter the dept number");
	scanf("%d",&deptno);
	printf("Enter the dc code:");

	getchar();
	dc=getchar();
	switch(deptno)
	{
		case 10:printf("Employed with employed Id:%d is working in marketing deparment",empId);
				break;
		case 20:printf("Employed with employed Id:%d is working in managment deparment",empId);
				break;
		case 30:printf("Employed with employed Id:%d is working in sales deparment",empId);
				break;
		case 40:printf("Employed with employed Id:%d is working in Designing",empId);


	}
	switch(dc)
	{
		case 'M':printf(" as Manager\n");
				 break;
		case 'S':printf(" as Supervisor\n");
				 break;
		case 's':printf(" as Security Officer\n");
				 break;
		case 'C':printf(" as Clerk\n");
	}



	return 0;
}
