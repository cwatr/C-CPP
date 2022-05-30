#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter two numbers");
	scanf("%d %d", &x, &y);
	printf("Product of %d and %d is %d\n", x, y, x*y);
	printf("On subtracting %d from %d, we get %d", x, y, y-x);
	return 0;
}
