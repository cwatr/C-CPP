#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int maxi=-1;
    int n, i, m, j, add=0;
    int **accounts;
    int *sum;
    printf("Enter two numbers ");
    scanf("%d%d", &n,&m);
    sum=(int*)malloc(n*sizeof(int));
    accounts=(int**)malloc(n*sizeof(int*));
    printf("1 \n");
   
    printf("2 \n");
     for(i=0;i<n;i++)
     {
         add=0;
         printf("Enter array ");
          printf("i= %d \n", i );
        accounts[i]=(int*)malloc(m*sizeof(int));
         for(j=0;j<m;j++)
         {
              printf("j= %d \n", j );
             scanf("%d ", &accounts[i][j]);
            add=add+accounts[i][j];
          
         }
          if(maxi<add)
        {
            maxi=add;
        }
         printf("3a \n");

     }
     printf("4a \n");
      
     printf("\n %d", maxi);
    return 0;
     


     





















}