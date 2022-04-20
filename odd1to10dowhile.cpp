#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("odd number");
	do
	{
		
		if(i%2!=0)
		{
			printf("%d",i);
		}
		i++;
	}while(i<=10);
	getch();
}