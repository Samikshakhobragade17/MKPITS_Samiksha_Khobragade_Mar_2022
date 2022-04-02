#include<stdio.h>
#include<conio.h>
int main()
{
	int mass,accel,force;
	printf("enter the mass of object");
	scanf("%d %d", &mass, &accel);
	force= mass*accel;
	printf("Force=%d",force);
	
}