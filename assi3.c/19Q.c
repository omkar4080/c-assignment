/*Q21.Print following patterns*
 * *
 * * *
 * * * *
 * * * * *
 */

#include<stdio.h>

int main(void)

{
	char ch;
	ch= '*';

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%-4c",ch);
		}
		printf("\n");
	}
	printf("\n.................................................................\n");

	/* * * * * *
	 * * * *
	 * * *
	 * *
	 *
	 */
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)

		{
			printf("%-4c",ch);
		}
		printf("\n");

	}
	printf("..................................................................\n");

	/*
	   1
	   1 2
	   1 2 3
	   1 2 3 4
	   1 2 3 4 5
	 */

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%-4d",j);

		}
		printf("\n");
	}
	printf("........................................................................\n");

	/*
	   5
	   5 4
	   5 4 3
	   5 4 3 2
	   5 4 3 2 1
	 */


	for(int i=5;i>=1;i--)
	{
		for(int j=5;j>=i;j--)
		{
			printf("%-4d",j);

		}
		printf("\n");
	}

	printf("...........................................................................\n");

	/*
	   A
	   B C
	   D E F
	   G H I J
	 */

	char c;
	c = 'A','B','C','D','E','F','G','H','I','j';


	for(int i=65;i<=74;i++)
	{
	for(int j=65; j<=i;j++)
	{
			printf("%c",c);
     }
		printf("\n");
	}
	
	













	return 0;
}
