#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n;
    int *nums;
    int *x;
    int *y;
    int *ans;
    printf("Enter a number ");
    scanf("%d", &n);
    nums=(int*)malloc(2*n*sizeof(int));
    x=(int*)malloc(n*sizeof(int));
    y=(int*)malloc(n*sizeof(int));
    ans=(int*)malloc(2*n*sizeof(int));
    for(i=0;i<2*n;i++)
    {
        scanf("%d", &nums[i]);        
    }
    for(i=0;i<2*n;i++)
    {
        printf("%d ", nums[i]);        
    }
     for(i=0;i<n;i++)
    {
        x[i]=nums[i]; 

    }
    for(i=n;i<2*n;i++)
    {
        y[i-n]=nums[i]; 
        printf("%d %d \n", y[i-n], nums[i]);
    }

     for(i=0;i<n;i++)
    {
        printf("\n %d ", x[i]);        
    }
     for(i=0;i<n;i++)
    {
        printf("\n %d ", y[i]);        
    }
    
    for(i=0;i<n;i++)
    {
        ans[(i*2)+1]=y[i];
        ans[i*2]=x[i];       
    }
     for(i=0;i<2*n;i++)
    {
        printf("\n %d ", ans[i]);        
    }
    
    return 0;
}