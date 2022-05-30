/************************************
* Name : Eisha Singh
* Roll No : 21IE10015
* Section : 1
* Group: 5 
* Assignment No : 6
* Description : functions
* Date : 11-05-2022
* ************************************/
#include<stdio.h>
#include<time.h>
#include<string.h>

int data[10000];
char name[1000];

//question 1
void input(int n)
{
	int i, j, k;
	srand(time(0));
	for(i=0;i<n;i++)
	{
		data[23*i]=i+1;
		data[23*i+1]=-1;
		for(j=0;j<16;j++)
		{
			data[(23*i)+j+2]=rand()%10;
		}
		data[(23*i)+2+j]=-1;
		for(k=j;k<3+j;k++)
		{
			data[(23*i)+3+k]=rand()%10;
		}
		data[(23*i)+3+k]=-2;
	}
	
}

void output(int n)
{
	int i, j, k;
	for(i=0;i<n;i++)
	{
		printf("\nID %d:  Card number: ", i+1);
		for(j=0;j<16;j++)
		{
			printf("%d", data[(23*i)+j+2]);
		}
		printf("  Limit: ");
		for(k=j;k<3+j;k++)
		{
			printf("%d",data[(23*i)+3+k]);
		}
	}
	
}
//question 2
void input2(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		name[13*1]='i+1';
		name[(13*i)+1]='-1';
		printf("\nFor ID %d name: ", i+1);
        scanf("%s", &name[(13*i)+2]);
        
		
	}
}

void output2(int n)
{
	int i, j=0;
	for(i=0;i<n;i++)
	{
		printf("\nID %d:   name:", i+1);
		
		while(name[(13*i)+j]!='\0');
		{
			printf("%c", name[(13*i)+2+j]);
			j++;
		}
		
	}
}

void search(int n)
{
	int in2, i, j, k;
	printf("\nPlease enter ID");
	scanf("%d", &in2);
	for(i=0;i<n;i++)
		{
			if(data[23*i]==in2)
				{
					printf("\nID %d:  Card number: ", in2);
	 				for(j=0;j<16;j++)
					{
						printf("%d", data[(23*(in2-1))+j+2]);
					}
					printf("  Limit: ");
					
					for(k=j;k<3+j;k++)
					{
						printf("%d",data[(23*(in2-1))+3+k]);
					}
					break;
				}
				else {
					printf("Error! No such ID exists.");
					return 0;
				}
			}
}		
//question 3	
void update(int n)
{
	int in3, i, j, k, newlim, temp;
	printf("\nPlease enter ID");
	scanf("%d", &in3);
	if(in3>n || in3<1)
	{
		printf("No such ID exists!");
		return 0;
	}
	printf("\nPlease enter new limit ");
	scanf("%d", &newlim);
	temp=newlim;
	for(i=0;i<3;i++)
	{	
		data[(23*(in3-1))+19+(n-i-1)]=temp%10;
		temp=temp/10;	
	}
	printf("\nUpdated Table:\n");
	for(i=0;i<n;i++)
	{
		printf("\nID %d:  Card number: ", i+1);
		for(j=0;j<16;j++)
		{
			printf("%d", data[(23*i)+j+2]);
		}
		printf("  Limit: ");
		for(k=j;k<3+j;k++)
		{
			printf("%d",data[(23*i)+3+k]);
		}
	}
}
//question 4	
void use(int n)
{
	int i, j, arr[16], in4, amt[3], count=0;
	printf("\nPlease enter ID");
	scanf("%d", &in4);
	printf("\nEnter card number ");
	for(i=0;i<16;i++)
	{
		scanf("%1d",&arr[i] );
	}
	
	for(i=0;i<n;i++)
	{
		if(in4==23*i)
		{
			for(j=0;j<16;j++)
			{
				if(data[(23*i)+2+j]==arr[j])
				count++;
			}
		}
		if(count==16)
		{
			printf("Enter amount ");
			for(i=0;i<3;i++)
			{
				scanf("%1d", amt[i]);
				if(amt[i]>data[(23*(in4-1)+19+i)])
				{
					printf("Error: The limit is less than the amount entered");
				}
				else printf("Amount updated!");
			}
		}
	}
}	
	
	

int main()
{
	void input(int n);
	void use(int n);
	int n, i, j, count=0, in, in2, k;
	srand(time(0));
	
	printf("Enter n ");
	scanf("%d", &n);
	
	printf("\nTable 1\n");
	input(n);
	output(n);
	printf("\n\nTable 2\n");
	input2(n);
	
	
	while(1)
	{
		printf("\n\nEnter 1 to Search\nEnter 2 to Update\nEnter 3 to Use card\nEnter 4 to exit ");
		printf("\n\nPlease enter your choice ");
		scanf("%d",&in);
		if(in==4)
		{
			printf("Goodbye!");
			return 0;
		}
		else if(in==1)search(n);
		else if(in==2) update(n);
		else if(in==3) use(n);
		
		
 }
			

	   
   
	return 0;
}
