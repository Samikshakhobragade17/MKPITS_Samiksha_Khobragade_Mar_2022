#include<stdio.h>
#include<conio.h>

int main()
{
	int i,count=0, a[7];
	printf("Enter the array element\n");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
	if(a[i]%2==0)
	{	
	count=count+1;
	}	
	}	printf("Count: %d",count);
}