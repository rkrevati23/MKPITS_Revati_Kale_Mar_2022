#include<stdio.h>
#include<conio.h>
int main()
{
	double temp,kel=274.15,fah=32;
	
	printf("enter temperature in degree celsius: ");
	scanf("%lf",&temp);
	
	kel =kel+temp;
	
	printf("\ntemperature (kelvin)= %lf\n",kel);
	fah =fah+(temp*1.8);
	
	printf("temperature (fahrenheit)= %f",fah);
}