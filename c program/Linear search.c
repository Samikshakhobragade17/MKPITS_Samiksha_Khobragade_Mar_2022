#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7],i,s,len,f=-1;
	printf("Enter array length: ");
	scanf("%d",&len);
	printf("Enter 5 numbers\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Enter the number you want to search: ");
	scanf("%d",&s);
	for(i=0;i<len;i++)
	{
		if(a[i]==s)
		{
		f=i;
		}

	}
	if(f>-1)
	{
		printf("Present at index %d ",f);
	}
	else
	{
		printf("Not present");
	}
}


