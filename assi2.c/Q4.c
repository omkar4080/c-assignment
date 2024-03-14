//Q4.Write a program to find maximum of two numbers using
//a. If – else
//b. conditional operator.

#include<stdio.h>

int main()
{
int x;
int y;
printf("Enter first number:");
scanf("%d",&x);
printf("Enter second number:");
scanf("%d",&y);

if(x>y)

{
printf("x is greter than y\n");

}
else
printf("y is greter than x\n");

// conditional operater

int a;
int b;

printf("Entre frist number:");
scanf("%d",&a);
printf("enter second number:");
scanf("%d",&b);
a>b?printf("a is greater than b\n"): printf("b is greater than a\n");


return 0;
}
