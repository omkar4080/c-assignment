/*Q.Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.*/

#include<stdio.h>
int main()
{  

int o;
int r;
int a;

printf("enter frist number:");
scanf("%d",&o);
printf("enter second number:");
scanf("%d",&r);
a = o + r;
printf("add two number=%d\n",a);
printf(".............................................\n");

int b;
b = o-r;
printf("sub two number=%d\n",b);
printf("...........................................\n");

int c;
c = o*r;
printf("mul two number=%d\n",c);

unsigned int e1;
unsigned int e2;
unsigned int e3;
printf("enter first unsigned number:");
scanf("%u",&e1);
printf("enter second unsigned number:");
scanf("%u",&e2);
e3=e1*e2;
printf("mul unsigned number=%u\n",e3);
 
short int n1;
short int n2;
short int n3;
printf("enter first short int number:");
scanf("%d",&n1);
printf("enter second short int number:");
scanf("%d",&n2);
n3= n1 + n2;
printf("add short int number=%d\n",n3);

long int c1;
long int c2;
long int c3;
printf("enter first long int value:");
scanf("%ld",&c1);
printf("enter second long int value:");
scanf("%ld",&c2);
c3 = c1 -c2;
printf("sub long int value=%ld\n",c3);

return 0;
}
