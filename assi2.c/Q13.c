//Q13.Write a program to crate four function calculator. Four functions are +, - , *, /




#include<stdio.h>
int main(void)

{
int n1;
int n2;
char opr;
float res;
printf("Enter the first number:");
scanf("%d",&n1);
printf("Enter the operator");
scanf("%*c%c",&opr);
printf("Enter the second number:");
scanf(" %d",&n2);
switch(opr)
{

case'+':res=n1+n2;
       printf("result=%.2f",res);
	   break;
case'-':res=n1-n2;
       printf("result=%.2f",res);
	   break;
case'*':res=n1*n2;
       printf("result=%.2f",res);
	   break;
case'/':res=n1/n2;
       printf("result=%.2f",res);

	   break;
	   default: 
	         printf("Enter valid opreand\n");


}
return 0;
}
