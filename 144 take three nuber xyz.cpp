#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z, res1,res2;
	
	printf("enter x: ");
	scanf("%d",&x);
	
	printf("enter y: ");
	scanf("%d",&y);
	
	printf("enter z: ");
	scanf("%d",&z);
	
	res1= (x+y)*z;
	res2= (x*y)+(y*z);

	printf("\n(x+y).z= %d\n",res1);
	printf("(x.y)+(y.z)= %d",res2);
}