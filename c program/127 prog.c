#include<stdio.h>
#include<conio.h>

int main()
{
	int i,a[10],size,f=0;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5&&(a[i+1]==5||a[i+2]==5))
		{
			f=1;
		}
	}
	printf("\n");
	if(f==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
		
	}
	
}