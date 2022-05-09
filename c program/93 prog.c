#include<stdio.h>
#include<conio.h>

int main()
{
	int x1;
	printf("Enter non negative number\n");
	scanf("%d",&x1);
	if(x1%13==0||x1%13==1)
	{
		printf("Multiple of 13 or one more than multiple of 13");
		
	}
	else
    {
	    printf("Not a multiple of 13");
    }
}