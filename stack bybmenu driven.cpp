#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int top=3,n=10,choice,temp,x,i;
int stck[10]={3,4,6,7};

	void push()
	{
		if (top==n-1)
		printf("overflow");
		else
		top++;
		stck[top]=x;
	
	printf("enter your choice: ");
	scanf("%d",&choice);
   }
	void pop()
	
	{
		if (top==-1)
		printf("underflow");
		else
		temp=stck[top];
		top--;
		printf("%d iteam removed\n",temp);
	}
   void dis()
    {
    	for(i=top; i>=-1; i--)
    	{
    		printf("%d\n",stck[i]);
		}
	}

int main()
{
	int choice;
	while(1)
	{
	printf("press 1 for push\n");
	printf("press 2 for pop\n");
	printf("press 3 for display\n");
	printf("press 4 for exit\n");
	printf("\n");
	printf(" enter your choice : ");
	scanf("%d",&choice);
	switch(choice)	
	{
		case 1:
		printf("enter iteam to add :");
		scanf("%d",&x);
		push();
		break;
		
		case 2:
		pop();
		break;	
		
		case 3:
		dis();
		break;	
		
		case 4:
		exit(0);
		break;
			
		default:
		printf("invalid input")	;
    }
		
			
	}
	}


	

