#include<stdio.h>
void main()
{
	int length,breadth,area,perimeter;
	printf("enter length");
	scanf("%d",&length);
	printf("enter breadth");
	scanf("%d",&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
		{
		printf("area of rectangle with length %d and breadth %d is greater than its perimeter",length,breadth);
		}
	else
		{
		printf("perimeter of rectangle with length %d and breadth %d is greater than its area",length,breadth);
		}
}	
