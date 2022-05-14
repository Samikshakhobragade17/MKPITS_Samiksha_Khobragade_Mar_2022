#include<stdio.h>
#include<conio.h>

int main()
{
	int i,a[10],size,f=0,s=0;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5&&a[i+1]==5)
		{
			f=1;
		}
		if(a[i]==3&&a[i+1]==3)
		{
			s=2;
		}
	}
	if(f==1&&s==2)
	{
		printf("It contains both 3 next to 3 and 5 next to 5");
		
	}
	else if(s==2)
	{
		printf("It contains 3 next to 3");
		
	}
	else if(f==1)
	{
		printf("It contains 5 next to 5");	
	}
	else
	{
		printf("Not contain");
	}
	
}