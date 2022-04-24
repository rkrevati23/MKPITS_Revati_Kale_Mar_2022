#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,n,k;
	scanf("%d",&n);
	
	for(r=1;r<2*n;r++) 
	{
		k=n;
		if(r<=n)
		{
			for(c=1;c<=2*n;c++)
			printf("%d",2);
			{
				if(r>c)
				k=k-1;
				if(r+c>=2*n)
				k=k+1;
			}
		}
		    if(r>n)   
		    {
		    	for(c=1;c<=2*n;c++)
		    	printf("%d",k);
		    	{
		    		if(r+c<2*n)
		    		k=k-1;
		    		if(c>=r)
		    		k=k+1;
				}
			}
			printf("\n");
		
	}
}