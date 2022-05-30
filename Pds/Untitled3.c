#include <stdio.h>

int main(){
	int n, i, j=0, k;
	int a[100], b[100];
	
printf("Enter n");
scanf("%d", &n);

printf("\nEnter a");
for(i=0;i<n;i++)
{
	scanf("%d", &k);
	if(i>0)
	{
		while(j!=i)
		{
			if(k==a[j])
		{
				printf("\nduplicate");
				break;
		}
		else j++;
		}
		k=a[i];
	}
	else k=a[i];
}
printf("\nEnter b");
for(i=0;i<n;i++)
{
	scanf("%d", &k);
	if(i>0)
	{
		while(j!=i)
		{
			if(k==b[j])
		{
				printf("\nduplicate");
				break;
		}
		else j++;
		}
		k=b[i];
	}
	else k=b[i];
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]==b[j])
		printf(" %d", a[i]);
	}
}













	return 0;
}
