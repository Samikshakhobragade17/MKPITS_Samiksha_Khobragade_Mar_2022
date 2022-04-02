#include<stdio.h>
int main()
{
	float side,perimeter;
	printf("Enter side of square");
	scanf("%f",&side);
	
	perimeter=4*side;
	printf("POS: %f\n",perimeter);
	return 0;
}