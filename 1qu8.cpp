#include<stdio.h>
main()
{
	int radius,perimeter,area_circle;
	radius=6;
	float cir;
	printf("enter radius");
	scanf("%d",&radius);
	perimeter=2*3.14*radius;
	printf("perimeter=%f",perimeter);
	area_circle=2*3.14*radius*radius;
	printf("area_circle=2%f",area_circle);
	
}