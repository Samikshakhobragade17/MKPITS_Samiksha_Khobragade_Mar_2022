#include<stdio.h>

void main()
{
	int a[10];
	int i,j,temp;
	
	printf("Enter ten values");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nsorted array is:\n");
	for(i=0; i<10; i++)
	{
		printf("%d\t",a[i]);
	}
}