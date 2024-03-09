//Q.Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
//triangle. Use sqrt() function from math.h to calculate square root.
//Perimeter = a + b + c␎ ␏ ␐ ␏ ␑
//Area = ␒␓ ␆ ␇␓ ␎ ␆ ␇␓ ␐ ␆ ␇␓ ␑
//Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c


#include<stdio.h>
#include<math.h>
int main()

{
 int a,b,c,area,perimeter;
 printf("enter the values of sides:\n");
 scanf("%d,%d,%d",&a,&b,&c);
 perimeter = a+b+(a*c)+b+c;
 printf("perimeter of triangle is : %d\n",perimeter);
 area= sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
 printf("area of triangle is :%d\n",area);



return 0;
}
