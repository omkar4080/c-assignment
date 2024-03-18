//Q9.Write a program to print table of given number.

#include<stdio.h>
int main(void)
{
int num;
 
printf("Enter the Number:");
scanf("%d",&num);

for(int i=1;i<=10;i++)
{
int res;

res = i*num;

printf("%d\n",res);
} printf("\n");

return 0;
}
