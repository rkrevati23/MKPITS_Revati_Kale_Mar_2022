#include<stdio.h>
int main()
{
	int x,y;
	
	printf("value for x and y:\n");
	scanf("%d%d",&x,&y);
	
	printf("before swapping the value of x &y :%d %d",x,y);
	
    x=x+y;
    y=x-y;
    x=x-y;
    
	printf("\nafter swapping the value of x &y :%d %d",x,y);
}