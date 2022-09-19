#include<stdio.h>
int	main()
{
	int	a, b, num;
	scanf("%d %d",&a, &b);
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &num);
		if(num < b)
		{
			printf("%d ",num);
		}
	}
}
