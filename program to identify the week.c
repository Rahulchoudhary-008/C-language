#include<stdio.h>
int main ()
{
	int week;
	printf("enter the number(1-7)");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wenesday");
			break;
		case 4:
			printf("Thrusday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
			defult:
			printf("please enter day number between 1-7");
	}
	return 0;
}
