#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two number for division\n");
	scanf("%d %d", &a, &b);
	c=a/b;
	printf("Division of %d and %d is %d\n", a,b,c);
	return 0;
}