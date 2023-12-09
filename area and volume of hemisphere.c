//area and volume of hemisphere//
#include<stdio.h>
int main()
{
	float area,volume;
	int r;
	printf("enter the radius of hemisphere:");
	scanf("%d",&r);
	area=4*3.14*r*r;
	volume=(2*3.14*r*r*r)/3;
	 printf("the volume of hemisphere is:%f\nthe area of hemisphere is:%f",area,volume);
	  return 0;
}
