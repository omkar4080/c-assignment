//Q11.Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
//which the point lies. Also check for special cases point lies on ␁␂␃␂␄␃␅␆, ␁␇␂␄␃␅␆, ␈ ␅ ␅ .

#include<stdio.h>
int main()
{
int x;
int y;
printf("Enter tne x-cordinate:");
scanf("%d",&x);
printf("Enter the y-cordinate:");
scanf("%d",&y);
if(x==0&&y==0)

{
printf("point lise on origin\n");

}
else if(x==0)
{
printf("point lise on y-axis\n");
}
else if(y==0)
{
printf("point lies on x-axis\n");
}
else if(x>0&&y>0)
{
printf("point lies on 1st Quadrant\n");
}
else if(x>0&&y<0)
{
printf("point lies on 2nd  Quadrant\n");
}
else if(x<0&&y<0)
{
printf("point lies on 3rd Quadrant\n");

}
else
printf("point lies on 4th Quadrant\n");

return 0;
}
