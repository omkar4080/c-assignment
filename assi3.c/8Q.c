#include<stdio.h>
int main(void)
{
int num1;
int num2;
int res;
 printf("enter the first number:");
 scanf("%d",&num1);
 printf("enter the second number:");
 scanf("%d",&num2);
 while(num2!=0)
 {
 res=num1%num2;
 num1=num2;
 num2=res;

 }num2;
 printf("GCD of no:%d\n",num1);
 return 0;
}


