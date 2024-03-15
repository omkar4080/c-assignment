#include<stdio.h>

int main(void)

{
int i=1;
int num;
printf("Enter the number:");
scanf("%d",&num);


while(i<=(num)&& (i!=num))
{
if(num%i==0)
{
printf(" %d ,",i);
}
i++;
}
return 0;
}
