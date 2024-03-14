//Q1.Write a program to accept two numbers and display division of the two numbers. Check for
//divide by zero error. If divider is zero then display appropriate error message.

#include<stdio.h>

int main()
{
int a;
int b;
printf("Enter first number:\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
if(b==0)
printf("error zero value entered\n");
else
{
float result = (float)a/b;
printf("the division of %d to %d is:%.2f\n",a,b,result);




}

return 0;
}

