#include<stdio.h>
int main()
{
	int i,j,n=4;
	for(i=1; i<=n; i++)
	{
		printf(" ");
	}
	for(j=1; j<=i; j++)
	{
		printf("* ");
	}
    for(j=0; j<i-1; j++)
    {
    	printf("* ");
	}
	printf("\n");
	return 0;
}
