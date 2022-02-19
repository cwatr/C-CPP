#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, j;
    int *nums;
    int good=0;
    printf("Enter a number ");
    scanf("%d", &n);
    nums=(int*)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", nums[i]);        
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                good=good+1;
            }
        }
    }
     printf("\n %d", good);
    return 0;
}
   