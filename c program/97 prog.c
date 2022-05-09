#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z;
	printf("Enter three number\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x<y&&y<z)
	{
		printf("Condition satisfy");
		
	}
	else
    {
	    printf("Condition not satisfy");
    }
}