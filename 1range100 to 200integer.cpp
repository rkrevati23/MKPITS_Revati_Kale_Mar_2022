#include<stdio.h>
#include<conio.h>
void fun();
int test(int x,int y);

int main()
{
	fun();
	
}
void fun()
{
	//int test;	
	printf("%d\n",test(100 ,199));
	printf("\%d",test(250 ,300));
	printf("\n%d",test(105 ,190));
	
}
    int test(int x,int y)
    {
    	return(x>=100 && x<=200) || (y>=100 && y<=200);
	}