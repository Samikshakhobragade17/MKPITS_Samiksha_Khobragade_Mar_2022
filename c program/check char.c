#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	printf("enter any character\n");
	scanf("%c",&x);
	if(x>=65&&x<=90)
	{
		printf("enter character is capital alphabet");
	}
	else if(x>=97&&x<=122)
	{
		printf("enter character is small alphabet");
	}
	else if(x>=48&&x<=57)
	{
		printf("enter character is digit");
	}
	else
	{
		printf("enter character is special symbol");
	}
	}