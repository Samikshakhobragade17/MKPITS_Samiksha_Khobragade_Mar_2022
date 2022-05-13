#include<stdio.h>
#include<conio.h>

int main()
{
	int i,a[10],size,sum=0;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5)
		{
			sum=sum+5;
		}
	}
	if(sum==15)
	{
		printf("Sum of all 5's are exactly 15");
	}
	else
	{
		printf("Sum of all 5's are not exactly 15");
		
	}
	
}