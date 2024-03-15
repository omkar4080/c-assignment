/*Q6.Write a program to accept a number and print unique pairs of numbers such that multiplication of
  the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24
 */
#include<stdio.h>

int main(void)
{
	int i=1;
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	while(i<(num/i)&&num!=i)
	
{
		int res = num/i;
if(num%i==0)
{
		printf("%d * %d=%d\n",i,res,num);

		i++;
}	}
return 0;

}
