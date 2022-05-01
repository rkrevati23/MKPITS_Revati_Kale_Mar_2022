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
	printf("%d",check(78,90));
	
	printf("\n%d",check(97,99));
	
	printf("\n%d",check(89,70));
	
  }
int check(int x,int y)
  {
    return(x>=97 && x<=99) || (y>=97 && y<=99);
    
  }
 
  
 
