#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,z,P;
	
	printf("first number\n");
	scanf("%f",&x);
	printf("second number\n");
	scanf("%f",&y);
	printf("third number\n");
	scanf("%f",&z);
	
	if(x<(y+z) && y<(x+z) && z<(x+y))
	{
	P=x+y+z;
	printf("perimeter=%f",P);	
	}
	
	else
    if (P!=0);
	{
			printf("triangle is not possible");
    }
}