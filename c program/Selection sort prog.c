#include<stdio.h>

void main()
{
	int a[10];
	int i,j,temp,min;
	
	printf("Enter ten values:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\n\nSorted array is :\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}