#include<stdio.h>
#include<string.h>
int	main()
{
	char	s[100];
	int	flag;
	int	count[26] = { 0 };
	scanf("%s", s);
	flag = 0;
	for(char i = 'a';i <= 'z'; i++)
	{
		for (int j = 0; j < strlen(s); j++)
		{
			if(s[j] == i)
			{
				flag = 1;
				if (count[i - 97]  == 0)
					printf("%d", j);
				count[i - 97] += 1;
			}
		}
		if (flag == 0)
			printf("-1");
		if( i != 'z')
			printf(" ");
		flag = 0;
	}
}

