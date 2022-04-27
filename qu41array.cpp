#include<stdio.h>
#include<conio.h>
main()
{
	int i,j=1;
	float s=0;
	
	for(i=1;i<=50;i++)
	
	{
		s=s+i/j;
		j=j*2;
		i=i+2;
	
		
	}

	printf("value of s : %f\n",s);
}