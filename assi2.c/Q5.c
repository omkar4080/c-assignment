//Q5.Write a program to find maximum of three numbers using
//a. If – else
//b. conditional operator.


#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf("a is maximum number\n");


	}
	else if(b>a && b>c)
	{
		printf("b is maximum number\n"); 
	}

	printf("c is maximum number\n");
     
// conditional operator

int x;
int y;
int z;
int max;
printf(" Enter first number:");
scanf("%d",&x);
printf(" Enter second numbrer:");
scanf("%d",&y);
printf(" Enter third number:");
scanf("%d",&z);
max =(x>y)?((x>z)?x:z):((y>z)?y:z);
printf("max=%d \n",max);


	return 0;
}
