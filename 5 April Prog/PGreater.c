#include<stdio.h>
#include<conio.h>

void main()
{ 
 int p1,p2,p3;
 
 printf("Enter p1");
 scanf("%d",&p1);
 
 printf("Enter p2");
 scanf("%d",&p2);
 
 printf("Enter p3");
 scanf("%d",&p3);
 
 if(p1>p2 && p1>p3)
 {
   "p1 is greater"	;
 }
 else
 if(p2>p1 && p2>p3)
 {
  "p2 is greater";
 }
 else
 {
 	"p3 is greater";
 }
 printf("Enter p3 is greater no");
}