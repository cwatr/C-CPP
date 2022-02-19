#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *nums;
    int *ans;
    printf("Enter a no. ");
    scanf("%d", &n);
    nums=(int*)malloc(n*sizeof(int));
    ans=(int*)malloc(2*n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);
    }
    for(i=0;i<n;i++)
    {
        ans[i]=nums[i];
    }
    for(i=0;i<n;i++)
    {
        ans[i+n]=nums[i];
    }
     for(i=0;i<2*n;i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;













}