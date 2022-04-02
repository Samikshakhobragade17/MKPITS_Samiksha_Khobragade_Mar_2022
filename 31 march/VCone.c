#include<stdio.h>
int main()
{
	float radius,height,volume;
	printf("Enter radius:");
	scanf("%f",&radius);
	printf("Enter height :");
	scanf("%f",&height);
	
	volume=(22*radius*radius*height)/(3*7);
	printf("VOC : %f\n", volume);
	return 0;
}