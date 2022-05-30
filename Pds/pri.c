#include<stdio.h>


void print( int i ) 
{
if (i < 10) {
printf("%d\n", i); 
return;
}
else {
printf("%d", i%10);
print(i/10);
}
}

int main()
{
	int x;
	scanf("%d", &x);
	print(x);
	return 0;
}

