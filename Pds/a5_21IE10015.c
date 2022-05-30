/************************************
* Name : Eisha Singh
* Roll No : 21IE10015
* Section : 1
* Group: 5 
* Assignment: 5
* Description : Database
* Date : 04-05-2022
* ************************************/
#include<stdio.h>
int main()
{
	int a[3] ,b[3], c, d, i, k=0, r=1, r1;
	
	//to input the database 
	printf("Database:\n");
	for(i=1;i<=3;i++)                        
	{
	printf("Enter account number for user%d ", i);
	scanf("%d", &a[i]);
	printf(" Available balance: ");
	scanf("%d", &b[i]);
	}
	printf("Transaction time \n");
	printf("\nPlease enter your account number ");
	scanf("%d", &c);
	printf("\nWithdrawal amount: ");
	scanf("%d", &d);
	
	//to update account details and withdraw balance
	for(i=1;i<=3;i++)
	{
		if(a[i]==c)
		{
			
			if(b[i]<d)
			{
			printf("\nInsufficient balance ");
			return 0;
	    	}
			r=0;
			printf("\nTransaction successful!");
			b[i]=b[i]-d;
			r1=i;
		}
		
	}
	
	if(r==1)
{
		printf("\nIncorrect account number ");
		return 0;
	}
	
	
	
	else 
	{
		printf("\nDo you want to see your updated balance? [enter 1 for yes and 0 for no]:");
		scanf("%d", &r);
		if(r==1)
		{
			printf("\nAvailable Balance updated:\nAccount Number: %d Available Balance: %d", c, b[r1]);
		}
	}
		
	return 0;
}
