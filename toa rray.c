//pointer to an array
#include<stdio.h>
int main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int *p;
	p=a;
	for(i=0;i<=5;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++);
	{
		printf("%d\n",*p+i);
	}
    for(i=0;i<5;i++)
    {
    	printf("%d\n",p+i);
	}
}
