#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,z,res;
	printf("weight of item1");
	scanf("%f",&x);
	
	printf("weight of item2");
	scanf("%f",&y);
	
	printf("numbers of purchase");
	scanf("%f",&z);
	
	res=(x+y)/z;
	printf("average value of item=%f",res);
	
	getch();
}