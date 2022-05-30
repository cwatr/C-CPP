#include<stdio.h>
int main()
{
	int a0, a1, a2, b0, b1, b2, p=59, c1, c2, c3;
	int m1, m2, m3;
	int p1, p2, p3;
	int q1, q2, q3, r1, r2, r3;
	printf("Enter the coefficients of f(x) \n");
	scanf("%d %d %d", &a0, &a1, &a2);
	printf("Enter the coefficients of g(x) \n");
	scanf("%d %d %d", &b0, &b1, &b2);
	printf("f(x)= %d*x^2+%d*x+%d \ng(x)= %d*x^2+%d*x+%d \nh(x)= %d*x^2+%d*x+%d \n", a0%p, a1%p, a2%p, b0%p, b1%p, b2%p, (a0+b0)%p, (a1+b1)%p, (a2+b2)%p);
	
	printf("Enter 3 unique integers ");
	scanf("%d %d %d", &p1, &p2, &p3);
	if(p1==p2 || p2==p3 || p3==p1) 
	{
		printf("Error");
		return 0;
	}
	
	p1=p1%p; p2=p2%p; p3=p3%p;
	q1=((a0*p1*p1)+(a1*p1)+(a2)); q2=((a0*p2*p2)+(a1*p2)+(a2)); q3=((a0*p3*p3)+(a1*p3)+(a2));
	r1=((b0*p1*p1)+(b1*p1)+(b2)); r2=((b0*p2*p2)+(b1*p2)+(b2)); r3=((b0*p3*p3)+(b1*p3)+(b2));

	printf("{f(%d)=%d, f(%d)=%d, f(%d)=%d}",p1,q1, p2, q2, p3, q3);
	printf("\n{g(%d)=%d, g(%d)=%d, g(%d)=%d}",p1, r1, p2, r2, p3, r3);
	printf("\n{{%d, m(%d)=%d}, {%d, m(%d)=%d}, {%d, m(%d)=%d}}", p1, p1, (q1+r1), p2, p2, (q2+r2), p3, p3, (q3+r3));
	
	c1=q1/((p1-p2)*(p1-p3)); c2=q2/((p2-p1)*(p2-p3)); c3=q3/((p3-p1)*(p3-p2));	//from the lagrange interpolation
	m1=c1+c2+c3;                                    //from the lagrange interpolation
	m2=-((c1*(p2+p3))+(c2*(p1+p3))+(c3*(p1+p2)));	//from the lagrange interpolation
	m3=((c1*p2*p3)+(c2*p1*p3)+(c3*p2*p1));			//from the lagrange interpolation
	
	printf("\nm(x)=%d*x^2+%d*x+%d", m1, m2, m3);
	printf("\nh(x)= %d*x^2+%d*x+%d",(a0+b0)%p, (a1+b1)%p, (a2+b2)%p );
	
	return 0;
	
	
	
	
}
