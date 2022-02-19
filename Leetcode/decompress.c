#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, j, f, v, total=0, flag=0 ;
    int *nums;
    int *sol;
    printf("Enter a number ");
    scanf("%d", &n);
    nums=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);        
    }
    printf("2a");

    for(i=0;i<n;i=i+2)
    {
        total=total+nums[i];
    }
     printf("\n %d \n", total);
    sol=(int*)malloc(total*sizeof(int));
    for(i=0;i<n-1;i=i+2)
    {
       f=nums[i];
       v=nums[i+1];
       for(j=0;j<f;j++)
       {
           sol[flag]=v;
          flag=flag+1;
       }   
    }
    printf("4a");
    
    for(i=0;i<total;i++)
    {
        printf("%d ", sol[i] );
    }



    return 0;


}    