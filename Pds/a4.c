/************************************
* Name : Your name(Eisha Singh)
* Roll No : 21IE10015
* Section : 1
* Group: 5 
* Assignment No : 4
* Description : polynomials...
* Date : 27-04-2022
* ************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{

	int i, n, e,j, sum=0, k;
	int a[5], b[5], c[10], m[10], cal1[10], cal2[10];
	int val[5];
	int add[5];
	float r[10], s[10], p[10];
	srand(time(0));
	//question 1
	printf("Enter degree of polynomial ");
	scanf("%d", &n);
	printf("f(x)=");
	for(i=0;i<n;i++)
	{
		a[i]=rand()%10;
		printf("%d*x^%d+",a[i], n-i);
	}
	a[n]=rand()%10;
	printf("%d", a[n]);
	printf("\nEnter an evaluation point ");
	scanf("%d", &e);
	for(i=0;i<n;i++)
	{
		val[i]=a[i];
		
	   for(j=0;j<n-i;j++)
	    {
	    	val[i]=val[i]*e;
	    
		}
	    sum=sum+val[i];
	}
	sum=sum+a[n];
	printf("f(%d)=%d", e, sum);
	
	//question 2
	printf("\nAnother polynomial of degree %d is \ng(x)=", n);
	for(i=0;i<n;i++)
	{
		b[i]=rand()%10;
		printf("%d*x^%d+",b[i], n-i);
	}
	b[n]=rand()%10;
	printf("%d", b[n]);
	for(i=0;i<=2*n;i++)
	{
		c[i]=0;
		for(j=0;j<=n;j++)
		{
		 for(k=0;k<=n;k++)
		 {
		 	if((j+k)==(2*n)-i)
		 	c[i]=c[i]+(a[j]*b[k]);
		 }
			
		}
	}
	printf("\nh(x)=");
	for(i=0;i<2*n;i++)
	{
		printf("%d*x^%d+",c[(2*n)-i], (2*n)-i);
	}
	
	printf("%d\n", c[0]);
	//question 3
	for(i=0;i<=2*n;i++)
	{
		m[i]=rand()%15;
	}
	printf("%d distinct points are ", 2*n+1);
	for(i=0;i<=2*n;i++)
	{
		printf("%d ",m[i]);
	}
	//for f(x)
	for(k=0;k<=2*n;k++)
	{
		cal1[k]=0;
	for(i=0;i<n;i++)
	{
		add[i]=a[i];
		
	   for(j=0;j<n-i;j++)
	    {
	    	add[i]=add[i]*m[k];
	    
		}
	    cal1[k]=cal1[k]+add[i];
	}
	cal1[k]=cal1[k]+a[n];
	}
	
	printf("\nPoint value representation of f: \nf(x):= {");
	for(i=0;i<=(2*n);i++)
	{
		printf("(%d, %d)", m[i], cal1[i]);
	}
	printf("}\n");
	
	// for g(x)
	for(k=0;k<=2*n;k++)
	{
		cal2[k]=0;
	for(i=0;i<n;i++)
	{
		add[i]=b[i];
		
	   for(j=0;j<n-i;j++)
	    {
	    	add[i]=add[i]*m[k];
	    
		}
	    cal2[k]=cal2[k]+add[i];
	}
	cal2[k]=cal2[k]+b[n];
	}
	
	printf("\nPoint value representation of g: \ng(x):= {");
	for(i=0;i<=(2*n);i++)
	{
		printf("(%d, %d)", m[i], cal2[i]);
	}
	printf("}\n");
	
	//for f(x)*g(x)
	printf("\nPoint value representation of fg: \nm(x):= {");
	for(i=0;i<=(2*n);i++)
	{
		printf("(%d, %d)", m[i], cal1[i]*cal2[i]);
	}
	printf("}\n");
	
	//question 4
	if(n==1)
 	{
 		
	for(i=0;i<=(2*n);i++)
	{
		s[i]= cal1[i]*cal2[i];
	}
	
	p[0]=s[0]/((m[0]-m[1])*(m[0]-m[2]));
	p[1]=s[1]/((m[1]-m[2])*(m[1]-m[0]));
	p[2]=s[2]/((m[2]-m[1])*(m[2]-m[0]));
	
	r[0]=p[0]+p[1]+p[2];
	r[1]=-((p[0]*(m[1]+m[2]))+(p[1]*(m[0]+m[2]))+(p[2]*(m[0]+m[1])));
	r[3]=(p[0]*m[1]*m[2])*(p[1]*m[0]*m[2])*(p[2]*m[0]*m[1]);
	
	for(i=0;i<3;i++)
	{
		if(r[0]==c[0] && r[1]==c[1] && r[2]==c[2])
		printf("\nh(x) & m(x) are equivalent");
	}
	printf("\nh(x) & m(x) are equivalent");
	
	printf("\nResult of interpolation is: \nm(x)= %d.0000000*x^2+%d.000000*x+%d.000000 ", c[2], c[1], c[0]);
	printf("\nYay! Success.");
}	
	
	return 0;
}
