#include<stdio.h>
#include<conio.h>

int main()
{
	int x1,x2,sum,diff;
	printf("Enter two number\n");
	scanf("%d%d",&x1,&x2);
	sum=x1+x2;
	diff=x1-x2;
	if(x1==5||x2==5||sum==5||diff==5)
	{
		printf("True");
		
	}
	else
    {
	    printf("False");
    }
}