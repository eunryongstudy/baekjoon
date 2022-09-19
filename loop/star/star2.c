#include<stdio.h>
int	main()
{
	int	i;
	scanf("%d", &i);
	for(int a = 1;a<=i;a++)
	{
		for(int c = i - a;c > 0; c--)
			printf(" ");
		for(int j = 1; j <= a; j++)
			printf("*");
		printf("\n");
	}
}
