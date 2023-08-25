#include<stdio.h>

main()
{
	int i,j,n,n1,sum=0;
	int a[100][100];
		
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
		}
	}
	sum = n*n1;
	
	printf("length of array =%d",sum);
	
	
	
}
