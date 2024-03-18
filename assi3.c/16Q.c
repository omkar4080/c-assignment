//16Q. Print following pattern
//* * * * *
//* * * * *
//* * * * *
//* * * * *
//* * * * *

#include<stdio.h>

int main(void)

{
char ch;
ch = '*';

for(int i=1;i<=5;i++)
{

for(int j=1;j<=5;j++)

printf("%c\t",ch);
printf("\n");
}printf("\n");

return 0;
}
