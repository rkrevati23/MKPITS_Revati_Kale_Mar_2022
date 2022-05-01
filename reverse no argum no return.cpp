#include<stdio.h>
#include<stdio.h>
void rev();
int main()
{
	rev();
}
void rev()
{
	int n1,num,rev=0;
	printf("enter the number\n");
	scanf("%d",&n1);
	
	for(;n1>0;)
	{
		num=n1%10;
		rev=rev*10+num;
		n1=n1/10;
	}
	printf("reverse= %d",rev);

}

