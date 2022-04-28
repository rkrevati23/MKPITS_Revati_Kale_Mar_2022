#include<stdio.h>
int main()
{
	int x,y;
	
	printf("read the integer\n");
	scanf("%d",&x);
	
	printf("\ninteger value :%d %d",x);
	
    x<<=2;
    y=x;
        
	printf("\nthe shifted data is : %d",y);
}