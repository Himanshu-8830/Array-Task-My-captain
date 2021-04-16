#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("Input elements in the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element-[%d][%d]\n", i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\n\n");
	
	
}
