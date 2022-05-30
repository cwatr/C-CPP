#include<stdio.h>

struct date
{
	int day, month, year;
};

struct date d, dt[2];

void input()
{
	printf("Enter date \nDate: ");
	scanf("%d", &d.day);
	printf("\nMonth:");
	scanf("%d", &d.month);
	printf("\nYear:");
	scanf("%d", &d.year);
}

void input2()
{
	int i=0;
	for(i=0;i<2;i++)	
{
	if(i==0)
	printf("Enter first date \nDate: ");
	if(i==1)
	printf("Enter second date \nDate: ");
	scanf("%d", &dt[i].day);
	printf("\nMonth:");
	scanf("%d", &dt[i].month);
	printf("\nYear:");
	scanf("%d", &d.year);
}
}

int leap_year(struct date in2)
{
	if(in2.year%100==0)
	{
		if(in2.year%400==0)
		{
		return 1;
		}
	}
	else if(in2.year%4==0)
	{
		return 1;
	}
	
	else {
		return 0;
	} 
}

void day_identify(struct date in)
{
	int tot;
	int mon;
	int leap=((in.year/4)-((in.year/100)-(in.year/400)));
	int nonleap=(in.year-1-leap+((in.year/100)-(in.year/400)));
	tot=leap*366+nonleap*365;
	int da;
	
if(in.month==1) tot=tot+in.day;
else if(in.month==2) tot=tot+31+in.day;
else if(in.month==3||5||7)
{
	mon=((in.month-1)/2*31)+(((in.month-1)/2)-1)*30;   //feb ka karna hai abhi
	tot=tot+mon+in.day;
}
else if(in.month==4||6||8)
{
	mon=((in.month)/2*31)+(((in.month)/2)-2)*30;   //feb ka karna hai abhi
	tot=tot+mon+in.day;
}
else if(in.month==9||11)
{
	mon=((in.month+1)/2*31)+(((in.month-1)/2)-2)*30;   //feb ka karna hai abhi
	tot=tot+mon+in.day;
}
else if(in.month==10||12)
{
	mon=((in.month)/2*31)+(((in.month)/2)-2)*30;   //feb ka karna hai abhi
	tot=tot+mon+in.day;
}
if(in.month>2)
tot=tot+28+leap_year(in);

da=tot%7;
switch(da)
{
	case 0: {
		printf("\nThe corresponding day is Sunday");
		break;
	}
	case 1: {
		printf("\nThe corresponding day is Monday");
		break;
	}
	case 2: {
		printf("\nThe corresponding day is Tuesday");
		break;
	}
	case 3: {
		printf("\nThe corresponding day is Wednesday");
		break;
	}
	case 4: {
		printf("\nThe corresponding day is Thursday");
		break;
	}
	case 5: {
		printf("\nThe corresponding day is Friday");
		break;
	}
	case 6: {
		printf("The corresponding day is Saturday");
		break;
	}	
}
}

int _diff(struct date d1, struct date d2)
{
	
}




int main()
{
	int n;
	printf("1. Check leap year\n2. Identify corresponding day of a given date\n3. Compute difference between two dates\n4. Calculate the next date after n days from a given date\n");
	scanf("%d", &n);
	switch(n)
	{
		case 1:
		{
			input();
			leap_year(d);
			if(leap_year(d)) 
			printf("Leap Year");
			
			else printf("Not Leap Year");
			break;
		}
		case 2:
		{
			input();
			day_identify(d);
			break;
		}
	}
	return 0;	
}





















