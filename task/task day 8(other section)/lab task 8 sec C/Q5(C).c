#include <stdio.h>
int main()
{
    int i, j,k,l,row;
    printf("Enter value of n :\n");
    scanf("%d", &row);
    for (i=row;i>=1;i--)
    {
    	for (j=1;j<=row-i;j++)
    	printf("  ");
    	for (k=1;k<=(2*i)-1;k++)
    	printf("* ");
    	printf("\n");
    }
}