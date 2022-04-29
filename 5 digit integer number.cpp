#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,n2,n3,n4,n5,bak,res;
	printf("enter any five digit number: ");
	scanf("%d",&num);
	
	bak=num;
	
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	num=num/10;
	
	n4=num%10;
	num=num/10;
	
	n5=num%10;
	
	res=n1*10000+n2*1000+n3*100+n4*10+n5*1;
	
	
	if(bak==res)
	{
		printf(" Numbers is palindrome number\n");
	}
	else
	{
			printf("\n Numbers is not a palindrome number");
	}
}
