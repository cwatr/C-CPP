#include<stdio.h>
int main()
{
	int i, j, m,n, gcd=0, lcm=1, flag;
	printf("Enter two numbers ");
	scanf("%d %d", &m, &n);
	printf("Divisors of m are  ");
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		printf("%d ", i);
	}
	printf("\nDivisors of n are  ");
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		printf("%d ", i);
	}
	printf("\nCommon divisors are ");
	
	
	for(i=2;i<n;i++)
	{
		if(n%i==0 && m%i==0)
		{
		printf("%d ", i);
		gcd=i;		
	}
}
  if(gcd!=0) printf("\nLargest common divisor = %d", gcd);
  
  for(i=n;i<=n*n;i++)
  {
  	if(i%n==0 && i%m==0)
  	{
  		lcm=i;
  		break;
	 }
  }
  printf("\nlcm = %d\n", lcm);
  printf("\nmultiple of %d=", n);
  for(j=n;j<=lcm;j=j+n)
  {
  
  		printf("%d ", j);
	  
  }
   printf("\nmultiple of %d=", m);
  for(j=m;j<=lcm;j=j+m)
  {
  	
  		printf("%d ", j);
	  
  }
  	
return 0;
}
