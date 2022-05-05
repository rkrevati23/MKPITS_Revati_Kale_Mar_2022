#include<stdio.h>
#include<string.h>
 int a=5 ;                                                     
int fun(int x )
{

 	int r,n;
 	
 	r= x*x*x;
 	
 	return r;
 
 }
int main()
 {
 	int a=5 ,res;
 	
 	res=fun(a);
 	
 	printf("%d",res );
 }

	