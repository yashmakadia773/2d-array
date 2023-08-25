#include<stdio.h>

main()
{
	int i,j,n,n1;
	int a[100][100];
	float sum=0;
	printf("Enter the value = ");
	scanf("%d",&n);
	printf("Enter the value = ");
	scanf("%d",&n1);
	
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n1; j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
			sum = sum + a[i][j];
		}
	}
	
	float avg=sum/(n*n1);
	
	printf("avg = %.2f",avg);
	
}
