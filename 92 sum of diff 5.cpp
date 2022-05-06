#include<stdio.h>

void fun();
int check(int x,int y);
int main()
 {
	fun();
 }
void fun()
  {
	printf("%d",check(1,4));
	
	printf("\n%d",check(4,3));
	
	printf("\n%d",check(6,3));
	
	printf("\n%d",check(5,4));
	
  }
int check(int x,int y)
  {
   
    return(x==5|| y==5 || x+y==5 || x-y==5 ); 
  }