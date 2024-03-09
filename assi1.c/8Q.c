//Q.Write a program to accept three integer numbers and find its average?


#include<stdio.h>
int main()
{
	int A;
	int B;
	int C;

	printf("enter the first number:");
	scanf("%d",&A);
	printf("enter the second number:");
	scanf("%d",&B);
	printf("enter the third number:");
	scanf("%d",&C);
	int avg =( A+B+C)/3;
	printf("avge of three value=%d\n",avg);




	return 0;
}
