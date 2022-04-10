#include<stdio.h>
main()
{
	int hours,min,s,sec,time;
	printf("enter the time");
	scanf("%d",&sec);
	s=sec;
	hours=sec/3600;
	min=sec/60;
	printf("time=%d%d%d",hours,min,s);     
}