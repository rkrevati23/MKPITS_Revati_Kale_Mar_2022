#include<stdio.h>
#include<conio.h>
void fun();
int check(int n);
int main()
 {
	fun();
 }
void fun()
  {
	printf("%d",check(9));
	
	printf("\n%d",check(3));
	
	printf("\n%d",check(21));
	
	printf("\n%d",check(7));
	
  }
int check(int n)
  {
   
    return( n%3 == 0 ^ n%7 ==0 ); 
  }