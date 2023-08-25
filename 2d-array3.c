#include<stdio.h>

main()
{
	int i,j,n,n1,sum=0;
	int a[100][100];
	printf("Enter the row of A= ");
	scanf("%d",&n);
	printf("Enter the column of A= ");
	scanf("%d",&n1);
	
		for(i=0; i<n; i++)
		{
			for(j=0; j<n1; j++)
			{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
			}
			printf("\n");
		}
		for(i=0; i<n; i++)
		{
			sum=0;
			for(j=0; j<n1; j++)
			{
				sum =sum+a[i][j];
			}
			printf("\nthe sum of row = %d\n",sum);
		}
		

		
	
}
