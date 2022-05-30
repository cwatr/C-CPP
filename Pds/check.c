#include<stdio.h>
int main()
{
	int n,i,r, count=0, j, flag=1, track=0, k;
	printf("Enter a number ");
	scanf("%d", &n);
	for(i=0;i*i<n;i++)
	{
		if(i*i==n)
		{
			printf("\nNot a prime number");
			return 0;
		}
	}
	for(r=1;r<n;r++)
	{
		count=0;
		flag=1;
		for(j=1;j<n;j++)
		{
			for(k=0;k<j;k++)
			flag=flag*r;
			
			if(flag%n<n) count++;
		}
		if(count==n) break;	
	}
	printf("%d, %d", count, r);
	return 0;
}
