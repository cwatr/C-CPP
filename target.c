#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, temp1=0, temp2=0;
    int *pos;
    int *val;
    int *tar;
    printf("Enter a number ");
    scanf("%d", &n);
    pos=(int*)malloc(n*sizeof(int));
    val=(int*)malloc(n*sizeof(int));
    tar=(int*)malloc(n*sizeof(int));
    printf("Enter ind ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &pos[i]);        
    }
    for(i=0;i<n;i++)
    {
        tar[i]=-10;        
    }
    printf("Enter val ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &val[i]);        
    }
    for(i=0;i<n;i++)
    {   if(tar[pos[i]]==-10)
       { tar[pos[i]]=val[i];}
        else 
        {
            temp2=tar[pos[i]];
            for(j=pos[i];j<n-1;j++)
            {
                temp1=tar[j+1];
                tar[j+1]=temp2;
                temp2=temp1;
            }
            tar[pos[i]]=val[i];
           
        }


    }
    for(i=0;i<n;i++)
    {
        printf("\n%d", tar[i]);        
    }
    return 0;






}