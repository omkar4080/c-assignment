//Q.3 Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>
int main()
{
int num;
printf("enter number check possitive or negative,zero:\n");
scanf("%d",&num);

if(num>0)
 printf("possitive number:\n");
 else if (num<0)
 printf("nagative number:\n");
 else
 printf("zero number\n");






return 0;

}

