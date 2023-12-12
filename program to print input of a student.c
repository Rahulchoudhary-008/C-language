#include<stdio.h>
int main ()
{
	char main[20];
	int rollno;
	float m1,m2,m3,m4,sum,percentage;
	printf("enter name of student\n");
	scanf("%s",&name[20]);
	printf("enter the roll_no.\n");
	scanf("%d",&rollno);
	printf("marks of 4 subjects\n");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	sum=m1+m2+m3+m4;
	percentage=sum/4;
	printf("%f",percentage);
	return 0;
}

