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
	printf("%d",check(80,95));
	
	printf("\n%d",check(25,30));
	
	printf("\n%d",check(20,27));
	
	printf("\n%d",check(21,28));
	
  }
int check(int x,int y)
  {
   
    if(x>=20 &&x<=30 && y>=20 && y<=30 ) 
    {
    	if(x>=y)
    	{
    	    return	x;
		}
		else
		{
			return y;
		}
	}
	else
	if(x>=20 && y<=30)
	{
	 return	x;
	}
	else
	if(y>=20 && y<=30)
	{
		return y;
	}
	else
	{
		return 0;
	}
	}
    
 