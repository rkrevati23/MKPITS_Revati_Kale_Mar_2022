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
	
	int a2[] = {13,15};
	printf("\n%d", check (a2));
	
	int a3[] = {11,21};
	printf("\n%d", check(a3));
}
int check(int n[])
{
	return n[0] != 12 && n[0] != 15 && n[1] != 12 && n[1] != 15;
}