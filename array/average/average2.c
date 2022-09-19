#include<stdio.h>
int	main()
{
	int	total,j, k;
	double sum;
	scanf("%d", &total);
	for(int	i = 0;i < total; i++)
	{
		scanf("%d",&j);
		sum = 0;
        	int arr[j];
		for(k = 0;k < j;k++)
		{
			scanf("%d", &arr[k]);
			sum = sum + arr[k];
		}
		sum /= j;
		int	count = 0;
		for(k = 0;k < j; k++)
		{
			if(arr[k] > sum)
				count++;
		}
		printf("%.3f%\n", (double)count/j*100);
	}
}
