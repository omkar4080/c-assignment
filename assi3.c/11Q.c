/*Q11.Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
Output: 32
Input:
base: 8
Output: 512
index: 5
index: 3
*/
#include<stdio.h>
int main(void)

{
int Base;
int power;
printf("Enter The Base:");
scanf("%d",&Base);
printf("Enter The Power:");
scanf("%d",&power);
int result= 1;
for(int i=0; i<power;i++)
{
result=result*Base;
}
printf("%d ^ %d= %d\n",Base,power,result);
return 0;
}
