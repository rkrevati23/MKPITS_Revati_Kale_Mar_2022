#include<stdio.h>
void fun();
int i=1;
int main()

{
	fun();
}
void fun()
{
//	int i=1;
	if (i==9)
	
	return;
	printf("%d", i);
	
	i++;
	
	fun();
	
}