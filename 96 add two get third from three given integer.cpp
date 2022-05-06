#include<stdio.h>
#include<conio.h> 
int check(int x,int y ,int z);
void fun();
int main()
{
	fun();
}
void fun()
{
		
	printf("%d",check(3,4,2));
	
	printf("\n%d",check(1,3,2));
	
	printf("\n%d",check(-1,1,0));
	
}

int check(int x,int y ,int z)
{
	return x==y+z || y==x+z || z==x+y;
}
	