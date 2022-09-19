#include<stdio.h>
int	main()
{
	int nbr[10],a,num;
	for(int	i = 0;i < 10; i++)
	{
		scanf("%d", &nbr[i]);
		nbr[i] %= 42;
	}
	num = 0;
	for(int	i = 0; i< 10;i++)
	{
		a = 0;
		for(int	j = i + 1;j< 10; j++)
		{
			if(nbr[i] == nbr[j])
				a++;
		}
		if(a == 0)
			num++;
	}
	printf("%d", num);
}

