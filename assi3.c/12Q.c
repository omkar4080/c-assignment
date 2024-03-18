/*Q12.Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/
#include<stdio.h>
int main(void)

{
int num,t1,t2,nextterm;
printf("Enter The Number:");
scanf("%d",&num);
printf("fibonancci series\n")

for(int i=1;i<=num;i++)
{
nextterm=t1+t2;
printf("%d",t1,t2);		
}
return 0;
}
