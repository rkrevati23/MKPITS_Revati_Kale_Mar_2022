#include<stdio.h>
int main()
{
int length,breadth,rect_perimeter;
printf("enter length");
scanf("%d",&length);
printf("enter breadth");
scanf("%d",&breadth);
rect_perimeter=2*(length+breadth);
printf("perimeter of rectangle=%d",rect_perimeter);
}