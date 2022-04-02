#include<stdio.h>
#include<conio.h>
#define PI 3.141
int main()
{
	float radius,area;
	printf("Enter radius of circle\n");
	scanf("%f", &radius);
	area = PI*radius*radius;
	printf(" area of circle :%0.4f", area);
	getch();
	return 0;
}