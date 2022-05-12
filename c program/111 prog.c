#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,sum1=0,sum2=0,a1[3],a2[3];
	
	printf("Enter 1st array \n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("Enter 2nd array\n");
	for(j=0;j<3;j++)
	{
	scanf("%d",&a2[j]);	
	}
	for(i=0;i<3;i++)
	{
		sum1=sum1+a1[i];
	}
	printf("Sum of array 1: %d\n",sum1);
	for(j=0;j<3;j++)
	{
		sum2=sum2+a2[j];
	}
	printf("Sum of array 2: %d\n",sum2);
	if(sum1>sum2)
	{
		printf("Array 1 has largest sum");
	}
	else
	{
		printf("Array 2 has largset sum");
	}
}