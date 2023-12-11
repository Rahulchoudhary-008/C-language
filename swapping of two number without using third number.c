//swapping to two number by without using third variable//
#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the first number and second number:\n");
	scanf("%d%d",&i,&j);
	i=i+j;
	j=i-j;
	i=i-j;
	printf("the first number after swapping is:%d\nthe second number after swapping is:%d",i,j);
	return 0;
}
