/************************************
* Name : Eisha Singh
* Roll No : 21IE10015
* Section : 1
* Group: 5 
* TAssignment: 7
* Description : structure
* Date : 25-05-2022
* ************************************/
#include<stdio.h>

struct student{
	char name[19];
	float marks[5];
	char roll_no[20];
};

void readlist(struct student list[], int size){
	
	int i, j;
	for(i=0;i<size;i++){
		printf("Please enter list for student %d", i+1);
		printf("\nName: ");
		scanf("%s", &list[i].name);
		printf("Marks for all subjects: ");
		for(j=0;j<5;j++){
			scanf("%f", &list[i].marks[j]);
		}
		
		printf("Roll Number: ");
		scanf("%s", &list[i].roll_no);
	}
}

void printlist(struct student list[], int size){
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nData for student %d \n", i+1);
		printf("Name: %s", list[i].name);
		printf("\nRoll No. %s ", list[i].roll_no);
		printf("\nMarks: %f | %f | %f | %f | %f\n", list[i].marks[0],list[i].marks[1],list[i].marks[2],list[i].marks[3],list[i].marks[4] );
	}
}

void sortlist(struct student list[], int size, int code){
	int i, j;
	struct student temp;
	if(code==1){
		for(i=0;i<size-1;i++)
		{
			for(j=i+1;j<size-1;j++)
			{
				if(list[j].name>list[j+1].name)
				{
					temp=list[j];
					list[j]=list[j+1];
					list[j+1]=temp;
				}
			}
		}
		
	printlist(list, size);
	}
//	else if(code==2){
//		
//	}
//	else if(code==3){
//		
//	}
//	else
//	{
//		printf("please enter the code value betweenn 1 to 3");
//	}

printlist(list, size);
}





int main()
{
	int i, j, size, code;
	struct student list[1000];
	printf("Enter the number of students ");
	scanf("%d", &size);
	readlist(list, size);
	printlist(list, size);
	printf("\n\nPlease enter code\n1 for name\n2 for roll number\n3 for marks");
	scanf("%d", &code);
	
	return 0;
	
}
