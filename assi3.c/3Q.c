/*3Q.Write a program to accept a number and
  a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
 */


#include<stdio.h>

int main(void)
{
	int num=9362;
	int rem=1;
	int rev=0;
	int sum=0;
	int arm=1;
	int temp=num;
	while(num!=0)
	{
		rem= num %10;
		rev= rev*10+rem;
		num=num/10;
	}
	printf("rev=%d\n",rev);
	if(temp==rev)
	{
		printf("palindrom\n");
	}
	else
	{
		printf("not palindrome\n");
	}
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("sum=%d\n",sum);

	while(temp!=0)
	{
		rem=temp%10;
		arm=arm +(rem*rem*rem);
		temp/=10;
	}
	if(arm==num)
		printf("armstrong:%d==%d\n",num,arm);
	else
		printf("not armstrong\n");


	return 0;
}

