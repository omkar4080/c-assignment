// Q Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula 
//conversion is?



#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("Enter temp in celsius:");
scanf("%f",&celsius);
fahrenheit = (celsius *9/5)+32;
printf("%f celsius= %f fahrenheit",celsius,fahrenheit);

return 0;
}
