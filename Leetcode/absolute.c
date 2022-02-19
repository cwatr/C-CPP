#include<stdio.h>
#include<stdlib.h>
int main()
{

int i, n, j, k, flag1=0, flag2=0 ;
    int *nums;
    printf("Enter a number ");
    scanf("%d", &n);
    nums=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);        
    }
    printf("Enter k");
    scanf("%d", &k);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(nums[i]-nums[j]==k)
            {
                flag1=flag1+1;
            }
        }
         for(j=i;j<n;j++)
        {
            if(nums[i]-nums[j]==-k)
            {
                flag2=flag2+1;
            }
        }
    }


    printf("%d %d", flag1, flag2);
    printf("\n%d", flag1+flag2);
    return 0;





}  



