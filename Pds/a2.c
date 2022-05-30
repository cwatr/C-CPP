#include<stdio.h>
int main()
{
	int n,k,r, j, track=1 ,add;
	printf("Enter a prime number ");
	scanf("%d", &n);
	add=(n)*(n-1)/2;
	for(k=2;k<n;k++)
	{
		if(n%k==0)
		{
			printf("error");
			return 0;
		}
	}
	
	for(r=2;r<n;r++)
	{
		add=((n)*(n-1))/2;
		for(j=1;j<n;j++)
		{
			
			track=1;
			for(k=1;k<j;k++)
			track=(track*r)%n;	
			add=add-track;
		}
		if(add==0)
		{
			printf("Generator is %d", r);
			return 0;
		}
		
	}
	
	
	return 0;
}
