//Q10.Write a program to find factorial of given number.



#include<stdio.h>
int main(void)
{
int num;

printf("Enter The Number:");
scanf("%d",&num);
int fact=1;
for(int i=1;i<=num;i++)
{
fact = fact*i;
}
printf("%d\n",fact);

printf("\n");
return 0;
}
