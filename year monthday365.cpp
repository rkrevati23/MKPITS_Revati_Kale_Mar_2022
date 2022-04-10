#include<stdio.h>
main()
{
	int days,month,year;
	printf("enter the days\n");
	scanf("%d",&days);
	year=days/365;
	month=days/30;
	
	printf("days=%d%d%d",days,month,year);
	
	
}