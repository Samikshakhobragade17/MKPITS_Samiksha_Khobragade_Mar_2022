#include<stdio.h>
#include<conio.h>

int main()
{
int i,sp,j;

for(i=1;i<=4;i++)
{
for(sp=1;sp<=40-i;sp++)
{
 printf(" ");
 }
 for(j=i*2-1;j>=1;j--)
 {
 printf("%c ",j+64);
 }
 printf("\n");
 }
 }