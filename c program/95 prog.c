#include<stdio.h>
#include<conio.h>

int main()
{
	int x1;
	printf("Enter number\n");
	scanf("%d",&x1);
	if(x1%10<=2)
	{
		printf("It is within 2 of a multiple of 10");
	}
	else
    {
	    printf("It is not within 2 of a multiple of 10");
    }
}