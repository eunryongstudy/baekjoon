#include<stdio.h>
#include<string.h>
int	main()
{
	int	total,loop;
	scanf("%d", &total);
	for(int i = 0; i< total; i++)
	{
		scanf("%d", &loop);
		char	arr[loop];
		scanf("%s", arr);
		for(int	j = 0; j < strlen(arr); j++)
		{
			for(int	k = 0; k < loop; k++)
			{
				printf("%c", arr[j]);
			}
		}
        printf("\n");
	}
}
