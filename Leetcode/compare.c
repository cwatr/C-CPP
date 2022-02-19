#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int *nums;
    int *sum;
    printf("Enter a number ");
    scanf("%d", &n);
    nums=(int*)malloc(n*sizeof(int*));
    sum=(int*)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);        
    }
     for(i=0;i<n;i++)
    {
        sum[i]=0;    
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(nums[i]>nums[j])
            sum[i]=sum[i]+1;
        }
    }
    for(i=0;i<n;i++)
    printf("%d ", sum[i]);

    return 0;




}



