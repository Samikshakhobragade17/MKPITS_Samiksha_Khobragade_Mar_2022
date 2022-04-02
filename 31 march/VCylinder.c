#include<stdio.h>
int main()
{
	float vol,r,h;
	printf("Enter radius:");
	scanf("%f", &r);
	
	printf("Enter height:");
	scanf("%f", &h);
	
	vol=(22*r*r*h)/7;
	printf("VOC : %f\n",vol);
	return 0;
}
