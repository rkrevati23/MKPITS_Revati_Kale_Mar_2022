#include<stdio.h>
int main()
{
	int num,n1,rev=0;
	
	printf("read the number\n");
	scanf("%d",&num);
	
	printf("\n original number :%d ",num);
	
   while(num>=1)
    {
    	n1=num%10;
    	rev=rev*10+n1;
    	num=num/10;
	}
        
	printf("\nthe reverse number : %d",rev);
}