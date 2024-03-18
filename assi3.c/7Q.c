#include<stdio.h>

int main(void)
{
	int num;
	int i=2;

	printf("Enter the number:");
	scanf("%d",&num);

	for(i=2; i*i<=num;i++)
	{
		while(num%i==0)
		{
			printf("%d\n",i);
			num/=i;
		}
	}
	if(num>1)
	{
		printf("%d",num);
	}
	printf("\n");
	return 0;
}
