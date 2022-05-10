#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,add,sub,mul,div;
	
	printf("enter the two number\n");
	scanf("%f%f",&a,&b);
	
	add = a+b;
	printf("addition: %f\n",add);
	
	sub = a-b;
	printf("substraction: %f\n",sub);
	
	mul = a*b;
	printf("multiplication: %f\n",mul);
	
	div = a/b;
	printf("division: %f",div);
}