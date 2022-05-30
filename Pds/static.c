#include<stdio.h>

int counter()
{
	int i;
	auto int count=0;
	for(i =0;i<5;i++)
	count++;
	return(count);
}

int main()
{
	int x, y;
	
	x =counter();
	printf("X=%d\n", x);
	
	y =counter();
	printf("Y=%d\n", y);
	
	return 0;
}
