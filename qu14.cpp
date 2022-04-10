#include<stdio.h>
main()
{
	float fuel,total_dist,average;
	printf("total distance travel by bike\n");
	scanf("%d",&total_dist);
	
	printf("total fuel\n");
	scanf("%d",&fuel);
	
	average=total_dist/fuel;
	printf("average of bike=%f",average);
	
}