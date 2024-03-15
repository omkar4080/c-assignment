/*Q4. Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/
#include<stdio.h>
int main(void)
{
int i=1;
int num;

printf("Enter the number:");
scanf("%d",&num);
int fact=1;
while(i<=num)
{
fact= fact*i;

i++;
}
printf("factorial number fact=%d\n ",fact);
return 0;
}
