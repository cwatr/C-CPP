#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i, extra, maxi=-1;
    int *candies;
    bool *ans;
    printf("Enter a number ");
    scanf("%d", &n);
    candies=(int*)malloc(n*sizeof(int*));
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &candies[i]);        
    }
    printf("Enter number of extra candies ");
    scanf("%d", &extra);
    ans=(bool*)malloc(n*sizeof(bool));
    for(i=0;i<n;i++)
    {
        if(maxi<candies[i])
        {
            maxi=candies[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if((candies[i]+extra)>=maxi)
        {
        ans[i]=true;
        }
        else
        {
            ans[i]=false;
        }
    }

    for(i=0;i<n;i++)
    {
        if(ans[i])
        {
            printf("1");
        }
        else
        printf("0");
              
    }

    return 0;


}