#include<stdio.h>
main()
{
	int height,width,area,perimeter;
	height=7;
	width=5;
	printf("enter the height and width");
	scanf("%d%d",&height, &width);
	perimeter=2*(height+width);
	printf("perimeter=%d",perimeter);
	area=height*width;
	printf("area=%d",area);
}