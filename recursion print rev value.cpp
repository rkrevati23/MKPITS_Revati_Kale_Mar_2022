#include<stdio.h>
void fun(int a);

int main()

{
	fun(1);
}
void fun(int a)
{
	if (a==10)
	
	return;
//	printf("%d\n", a);
	
	fun(a+1);
	printf("%d\n",a);
}