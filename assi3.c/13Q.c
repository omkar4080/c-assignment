//Q13.Write a program to accept a number and check whether it is Prime no.

#include<stdio.h>
int main(void)
{
int num;
int flag=1;
printf("Enter The Number:");
scanf("%d",&num);
for(int i=2;i<=num/2;i++)

if(num%i==0)
{
flag=0;
break;
}

if (flag==1)
{
printf("Is prime number\n");

}
else
printf("Is not prime number\n");

return 0;
}
