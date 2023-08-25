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
			for(j=0; j<n1; j++)
			{
				if(i+j==(n+1)-2)
				{
					sum =sum+a[i][j];
				}
			}
		}
		printf("%d",sum);

		
	
}
