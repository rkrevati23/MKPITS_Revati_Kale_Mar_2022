#include<stdio.h>
#include<conio.h>
void fun();
int check(int x,int y);
int main()
 {
	fun();
 }
void fun()
  {
	printf("%d",check(22,342));
	
	printf("\n%d",check(25,30));
	
	printf("\n%d",check(208,288));
	
	printf("\n%d",check(21,28));
	
  }
    int check(int x,int y)
  {
  	return(x %10)==(y % 10);
  	
  }