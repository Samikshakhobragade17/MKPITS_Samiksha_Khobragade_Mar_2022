#include<stdio.h>
#include<conio.h>

int main()
{
	int x1,x2,x3;
	
	printf("Enter three number\n");
	scanf("%d%d%d",&x1,&x2,&x3);
	
	if(x1==x2+x3||x2==x1+x3||x3==x1+x2)
	{
		printf("Possible to add");
		
	}
	else
    {
	    printf("Not possible to add");
    }
}