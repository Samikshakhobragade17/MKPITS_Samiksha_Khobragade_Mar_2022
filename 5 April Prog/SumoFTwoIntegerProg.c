#include <stdio.h>
int main() 
{
	int x, y, sum;
    printf("\n The first integer: "); 
    scanf("%d", &x);
    printf("\n The second integer: ");
    scanf("%d", &y);
    sum = x + y;
    printf("\nSum of the above two integers = %d\n", sum);
    return 0;
}