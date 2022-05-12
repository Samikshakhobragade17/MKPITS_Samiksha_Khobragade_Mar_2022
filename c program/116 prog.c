#include<stdio.h>
#include<conio.h>

int main()
{
	float n1,n2,add,sub,mul,div;
	
	printf("Enter the two number\n");
	scanf("%f%f",&n1,&n2);
	add=n1+n2;
	printf("Addition: %f\n",add);
	sub=n1-n2;
	printf("Substraction: %f\n",sub);
	mul=n1*n2;
	printf("Multiplication: %f\n",mul);
	div=n1/n2;
	printf("Division: %f",div);
}