#include<stdio.h>
#include<conio.h>

int main()
{
	int r,c,b,add=5,add1=0;
	for(r=1;r<=4;r++)
	{
	for(c=1;c<=4;c++)
	{
			if(r+c>4)
			{
				add=add-1;
				printf("%d ",add);

			}
			else
			{
				add=add-1;
				printf("  ");
			}
	}
		add=5+r;
	for(b=3;b>=1;b--)
	{
		if(r+b>4)
		{
		printf("%d ",add1);
		add1=add1-1;	
		}
		else
		{
		printf(" ");	
		}
	}
	add1=r;
	printf("\n");
	}
}

 
 
