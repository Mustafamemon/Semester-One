#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	row=(2*row)+3;
	for (i=1 ;  i<=row ; i++)
	{
		for (j=1;j<=i;j++)
		printf("%d",j);
		for (j<=i-1;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
}
