#include<stdio.h>
main()
{
	int x,y,i,pow=1;
	printf("enter x and y value");
	scanf("%d%d",&x,&y);
	i=1;
    do 
	{
		pow=pow*x;
		i++;
	}while(i<=y);
	
	printf("pow=%d",pow);
}