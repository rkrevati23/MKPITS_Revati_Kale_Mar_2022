#include<stdio.h>
main()
{
	int x,y,i,pow=1;
	printf("enter x and y value");
	scanf("%d%d",&x,&y);
	i=1;
	for(i=1;i<=y;i++)
	{
		pow=pow*x;
		
	}
	printf("pow=%d",pow);
}