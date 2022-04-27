#include<stdio.h>
#include<string.h>
main()
{
	int a,i;
	printf("enter  numbers in line\n ");
	scanf("%d",&a);
	i=1;
	for(i=1;i<=a;i++)
	{
	printf("%d %d %d\n", i, i*i, i*i*i);	
	   i++;
	}
}