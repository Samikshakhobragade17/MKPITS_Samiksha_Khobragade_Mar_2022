#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,add=1;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c>4)
			{
				printf("%d ",add);
				
			}
			else
			{
				printf(" ");
			}
		}
		add=add+2;
		printf("\n");
	}
}