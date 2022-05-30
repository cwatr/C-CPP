/************************************
* Name : Eisha Singh
* Roll No : 21IE10015
* Section : 1
* Group: 5 
* Test01 
* Date : 04-05-2022
* ************************************/
#include<stdio.h>
int main()
{
	int n, flag=0, i=0, count=0, pairs=1, j, s, e, r, t=0, t1;
	int nums[1000], arr[1000];
	printf("Enter a number ");
	scanf("%d", &n);
	printf("\nNumber entered is %d", n);
	while(n!=0)
	{
		nums[i]=n%10;
		n=(n-(n%10))/10;
		flag++;
		i++;
	}
	//question 1
	printf("\nQuestion 1: No. of digits of n is %d\n\n", flag);
	for(i=0;i<flag/2;i++)
	{
		count=nums[i];
		nums[i]=nums[flag-i-1];
		nums[flag-i-1]=count;		
	}
//question 2
	printf("\nQuestion 2: Numbers\n");
 
	for(i=0;i<flag;i++)
	{
		for(s=0;s<flag-i;s++)
		{
		
			t1=0;
			for(r=s;r<=s+i;r++)
			{
			
				t1=10*t1+nums[r];
			}
		    printf("%d ", t1);
			arr[t]=t1;
			t++;
		}
	}
	
	
	//question 3
	printf("\n\nQuestion 3: Coprime numbers:");
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			t1=1;
			for(r=2;r<=arr[i];r++)
			{
			if(arr[i]%r==0 && arr[j]%r==0)
			t1=0;
			}
			if(arr[i]==1 || arr[j]==1)
			continue;
			
			if(t1==1)
			printf("\n(%d, %d) are coprime ", arr[i], arr[j]);	
		}
	}
	//question 4
	printf("\n\nQuestion 4: Prime numbers are \n");
	for(i=0;i<t;i++)
	{
		if(arr[i]==1)
		continue;
		if(arr[i]==2 || arr[i]==3)
		printf("%d\n", arr[i]);
		else 
		{
			t1=0;
			for(j=2;j*j<=arr[i]+1;j++)
			{
			if(arr[i]%j==0)
			t1=1;	
			}
			
			if(t1==0)
			printf("%d\n", arr[i]);
			
		}
	}
	
	return 0;
}
