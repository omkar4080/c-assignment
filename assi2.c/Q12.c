#include<stdio.h>
int main()
{
int month;
int year;
printf("Enter the month:");
scanf("%d",&month);
printf("Enter the year:");
scanf("%d",&year);

switch(month)
{
case 1 : printf("31 day in the month\n");

        break;


        

        
case 2 :if(year%4==0&&year%100!=0||(year%400==0))
         printf("29 day in the month is leap year\n");
		 else
		  printf("28 day in the month is not leap year\n");
        break;

case 3 :printf("31 days in month\n");
       break;

case 4 : printf("30 day in the month\n");
        break;
 
case 5 :printf("31 day in the month\n");
        break;

case 6 :printf("30 day in the month\n");
        break;

case 7 :printf("31 day in the month\n");
        break;

case 8 :printf(" 31 day in the month\n");
        break;

case 9 :printf("30 day in the month\n");
        break;

case 10 :printf("31 day in the month\n");
        break;

case 11 :printf("30 day in the month\n");
        break;
case 12 :printf("31 day in the month\n");
        break;
		default : printf("Enter valid number\n");
}
return 0;


}
