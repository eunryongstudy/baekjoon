#include<stdio.h>
int	main()
{
	int	max,i;
	int	arr[9];
	for(i=0;i<9;i++)
		scanf("%d", &arr[i]);
	max = 0;
	for(i = 0;i < 9; i++)
	{
		if(max < arr[i])
			max = arr[i];
	}
	for(i = 0;i < 9; i++)
	{
		if(max == arr[i])
			break;
	}
	printf("%d\n%d",max ,i+1);
}
