#include<stdio.h>
int main()
{
	int p,q,r,s;
	printf("enter first integer\n");
	scanf("%d",&p);
	
	printf("enter second integer\n");
	scanf("%d",&q);
	
	printf("enter third integer\n");
	scanf("%d",&r);
	
	printf("enter fourth integer\n");
	scanf("%d",&s);
if(q>r && s>p && ((r+s)>(p+q)) && (r>0) && (s>0) && (p%2==0))
{
	printf("CORRECT VALUES");
}
else
{

	printf("WRONG VALUES");
}
		
}