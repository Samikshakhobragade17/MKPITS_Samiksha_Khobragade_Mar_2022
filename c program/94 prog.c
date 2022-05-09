#include<stdio.h>
#include<conio.h>

int main()
{
	int x1;
	
	printf("Enter non negative number\n");
	scanf("%d",&x1);
	
	if(x1%3==0)
	{
		if(x1%7!=0)
		printf("Multiple of 3");
		
	}
	if(x1%7==0)
    {
    	if(x1%3!=0)
	    printf("Multiple of 7");
    }
}