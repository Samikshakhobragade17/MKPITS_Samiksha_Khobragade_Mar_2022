#include<stdio.h>
#include<conio.h>
void fun()
{
	int n1,n2,sum=0,i;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	i=n1;
	while(i<=n2)
	{
		if(i%17!=0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
		i++;
	}
	printf("addition of all no not divisible by 17 between %d and %d=%d",n1,n2,sum);
}
void main()
{
	fun();
}