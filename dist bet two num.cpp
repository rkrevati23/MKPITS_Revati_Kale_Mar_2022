#include<stdio.h>
main()
{
	float x1,x2,y1,y2,distance;
	printf("enter x1");
	scanf("%f",&x1);
	printf("enter y1");
	scanf("%f",&y1);
	printf("enter x2");
	scanf("%f",&x2);
	printf("enter y2");
	scanf("%f",&y2);
	
	distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance between the two point=%f",distance);

}