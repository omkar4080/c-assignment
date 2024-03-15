//1Q.Write a program to accept a character and a number, and print the character number times
//Input:
//Character: *
//Number: 6
//Output:
//*****

#include<stdio.h>

int main(void)
{

int i,num;
char ch ='*';
printf("enter the number:");
scanf("%d",&num);
i=0;
while(i<num)
{
printf("%c ",ch);
i++;
}
printf("\n");



return 0;
}
