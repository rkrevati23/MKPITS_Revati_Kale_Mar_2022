#include<stdio.h>
main()
{
	double i,s=0,j=1;
	
	for(i=1;i<=7;i++)
	{
		s=s+i/j;
		i=i+2;
		j=j*2;
	}
	printf("value of s : %f ",s);
}