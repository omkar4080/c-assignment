/*Q7.Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).
*/


#include<stdio.h>
int main()

{
int num;
int rem=1;
int sum=0;
int rev=0;
printf("Enter the number");
scanf("%d",&num);
int temp;
temp=num;
while (num!=0)
{
rem=num%10;
rev=rev*10+ rem;
num=num/10;
}
printf("rev=%d\n",rev);
if(temp==rev)
{
printf("palindrom\n");
}
else
{
printf("not palindrom\n");
}


return 0;
}
