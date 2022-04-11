#include<stdio.h>
int main()
{
	int x,y;
	printf("the co- ordimate is (x,y)");
	scanf("%d%d",&x,&y);
	
if(x>0 && y>0)
{
	printf("I-quadrant(+,+)\n");
}
else
if(x>0 && y<0)
{
	printf("II-quadrant(+,-)\n");
}
else
if(x<0 && y<0)
{
	printf("III-quadrant(-,-)\n");
}
else
if(x<0 && y>0)
{
	printf("IV-quadrant(-,+)\n");
}

}