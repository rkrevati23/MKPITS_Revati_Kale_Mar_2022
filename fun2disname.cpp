#include<stdio.h>
#include<conio.h>

void disname();
int main()

{
	int i;
	
	for(i=1;i<=10;i++)
	{
		disname();
	}
}
void disname()
{
	printf("my name\n");
	getch();
}