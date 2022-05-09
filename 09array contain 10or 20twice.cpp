#include<stdio.h>
#include<conio.h>
void fun();
int check(int n[]);
int main()
{
	fun();
}
void fun()
{
	int a1[] = {12,20};
	printf("%d", check(a1));
	
	int a2[] = {10,10};
	printf("\n%d", check (a2));
	
	int a3[] = {20,20};
	printf("\n%d", check(a3));
}
int check(int n[])
{
	return 
	 ((n[0] == 10 && n[1] == 10) || (n[0] == 20 && n[1] == 20));
}