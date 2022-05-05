#include<stdio.h>
#include<string.h>
#include<conio.h>                                                     
int fun(int x );
int a=5;
int main()
{
	fun(a);
}
void fun()
{

 	int a=5;
 	
 	fun(a);
 	
 	
 }
int fun (int x)
 {
 	int r;
 	
 	r= x*x*x;
 	
 	
 	printf("%d",r);
 }

	