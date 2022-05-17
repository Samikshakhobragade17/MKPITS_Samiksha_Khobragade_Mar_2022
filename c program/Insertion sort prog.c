#include<stdio.h>

void main()
{
	int a[5];
	int i,j,temp;
	
	printf("Enter five values :");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=1;i<5;i++)
  {  
    temp=a[i];
    j=i-1;
    while(i>=0 && a [ j ]>temp)
   {
     a[ j+1]=a[j];
     j--;
   }
   a[j+1]=temp;
  }
  printf("\n\nsorted array is : \n");
  for (i=0;i<5;i++)
  {
  	printf("%d",a[i]);
  }
}
