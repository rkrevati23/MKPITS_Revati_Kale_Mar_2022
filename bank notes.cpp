#include<stdio.h>
main()
{
	int amt,total;
	printf("the amount");
	scanf("%d",&amt);
	
	printf("\ntotal notes");
	
	total=amt/100;
	printf("\ntotal notes of 100=%d",total);
	
	amt=amt-total*100;
	total=amt/50;
    printf("\ntotal notes of 50=%d",total); 
    
    amt=amt-total*50;
	total=amt/20;
    printf("\ntotal notes of 20=%d",total); 
    
    amt=amt-total*20;
	total=amt/10;
    printf("\ntotal notes of 10=%d",total); 
    
    amt=amt-total*10;
	total=amt/5;
    printf("\ntotal notes of 5=%d",total); 
    
    amt=amt-total*5;
	total=amt/2;
    printf("\ntotal notes of 2=%d",total); 
    
    amt=amt-total*2;
	total=amt/1;
    printf("\ntotal notes of 1=%d",total); 
    
}