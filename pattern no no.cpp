#include<stdio.h>
#include<conio.h>
void fun();
 int main()
 {
 	fun();
 }
 void fun()
 {

	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" %d ",c);
		}
		
		    printf("\n");
	} 
	getch();
}