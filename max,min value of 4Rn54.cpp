#include<stdio.h>
int main()
{
	double p1,p2,p3,p4;
	double max,min;
	
	printf("enter four number:\n");
	scanf("%lf %lf %lf %lf",&p1,&p2,&p3,&p4);
	
     if(p1>=p2 && p1>=p3 && p1>=p4)
     {
     	max=p1;
	 }
	 else
	 if(p2>=p1 && p2>=p3 && p1>=p4)
     {
     	max=p2;
	 }
	 else
	 if(p3>=p1 && p3>=p2 && p3>=p4)
     {
     	max=p3;
	 }
	 else 
	 {
	 
     	max=p4;
     }   
     
     if(p1<=p2 && p1<=p3 && p1<=p4)
     {
     	min=p1;
	 }
	else
	if(p2<=p1 && p2<=p3 && p2<=p4)
     {
     	min=p2;
	 }
	 else
	 if(p3<=p1 && p3<=p2 && p3<=p4)
     {
     	min=p3;
	 }
	 else
	 {
	    min=p4;
	 }
	printf("\ndifference of  %0.4lf\n",max,min);
	
return 0;
}