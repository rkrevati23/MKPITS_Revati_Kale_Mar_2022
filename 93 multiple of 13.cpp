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
	printf("%d",check(15));
	
	printf("\n%d",check(13));
	
	printf("\n%d",check(27));
	
	printf("\n%d",check(14));
	
  }
int check(int n)
  {
   
    return(n % 13==0 || n%13 == 1 ); 
  }