#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  n, i;
    int *ans;
    int *nums;
    int *ptr;
    printf("Enter a number: ");
    scanf ("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    nums=(int*)malloc(n*sizeof(int));
    ans=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d \n", nums[i]);
    }
    for(i=0;i<n;i++)
    {
       ans[i]=nums[nums[i]];
    }

for(i=0;i<n;i++)
{
    printf("ans= %d ", ans[i]);
}
return 0;


}