#include <stdio.h> 

int main()

{
int x, N; scanf("%d", &N);
printf("%d\n", N);

N /= 2;
x = (N>15)?(N=4):(N=12);
if (x < 10 )
if (x < 15 ) printf("A");
else printf("B");
printf("C" );

return 0;
}
