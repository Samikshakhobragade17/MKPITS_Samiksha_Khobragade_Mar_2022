#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name1[15]={"sami"};
	char name2[15]={"sami"};
	if(strcmp(name1,name2)==0)
	{
		printf("string name1 and string name2 are same");
	}
	else
	{
	printf("string name1 and string name2 are not same");	
	}

}