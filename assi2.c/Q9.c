//Q9.Write a program to display number of days in the given month and year using
//a. Using If else ladder.
//b. Using logical operators.

#include<stdio.h>
int main()
{
	int month;
	int year;
	printf("Enter the month:");
	scanf("%d",&month);
	printf("Enter the year:");
	scanf("%d",&year);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{

		printf("31 days in month\n");

	}
	else if(month==4||month==6||month==9||month==11)
	{
		printf("30 days in month\n");
	}
	else if(month==2)
	{
		if((year%4==0&&year%100!=0)||year%400==0)

		{
	    	printf("29 days in month leap year\n");
		}
		else
		{
		    printf("28 days in month is non leap year\n");
		}

	}
	else
	printf("Enter valid number in month!\n");

	return 0;
}
