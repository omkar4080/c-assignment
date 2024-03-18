//Q17.Write a program to print the tables of the numbers from 1 to 10.


#include<stdio.h>

int main(void)

{
	int i;
	int res;

	for(i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			res = i*j;
			printf("%-4d",res);
			

		}
		printf("\n");

		}

	printf("\n");
	return 0;
}
