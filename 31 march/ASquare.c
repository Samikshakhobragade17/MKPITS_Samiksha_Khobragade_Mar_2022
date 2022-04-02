#include<stdio.h>
int main()
{
	int side,area;
	printf("\nEnter the length of side:");
	scanf("%d", &side);
	
	area= side* side;
	printf("\narea if square : %d", area);
	
	return 0;
}