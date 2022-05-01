#include<stdio.h>
#include<stdio.h>
void fact();
int main()
{
	fact();
}
void fact()
{
	int n1,i,fact=1;
	printf("enter the number\n");
	scanf("%d",&n1);
	i=n1;
	
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("%d",fact);

}