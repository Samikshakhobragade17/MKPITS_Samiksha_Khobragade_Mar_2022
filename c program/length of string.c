#include<stdio.h>
#include<conio.h>

int main()
{
	int i,count=0;
	char ch[20]={"samiksha"};
	for(i=0;ch[i]!='\0';i++)
	{
	count=count+1;		
	}
	printf("%d",count);	
}