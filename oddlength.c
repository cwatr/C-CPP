#include<stdio.h>
#include<stdlib.h>
int fact(int x)
{
    int i, y=1;
    for(i=1;i<=x;i++)
    {
        y=y*i;
    }
    return y;
}


int main()
{

int i, n, j;
int **sub;
    int *nums;
    printf("Enter a number ");
    scanf("%d", &n);
    nums=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);        
    }

    for(i=0;i<n/2;i++)
    {

            sub[i]=(int*)malloc(((2*i)+1)*sizeof(int));
           

        
        
    }
}   
