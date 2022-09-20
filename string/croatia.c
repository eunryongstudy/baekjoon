#include<stdio.h>
#include<string.h>
int	main()
{
	char	str[100];
	int	count = 0;
	scanf("%s", str);
	for(int	i = 0; i < strlen(str); i++)
	{
		if(str[i] == 'c')
		{
			if(str[i + 1] == '=')
				count--;
			if(str[i + 1] == '-')
				count--;
		}
		else if(str[i] == 'd')
		{
			if (str[i + 1] == 'z' &&str[i + 2] == '=')
				count -= 2;
			if (str[i + 1] == '-')
				count--;
		}
		else if(str[i] == 'n' || str[i] == 'l')
		{
			if (str[i + 1] == 'j')
				count--;
		}
		else if(str[i] == 's')
		{
			if (str[i + 1] == '=')
				count--;
		}
		else if(str[i] == 'z')
		{
			if (str[i + 1] == '=' && str[i - 1] != 'd')
				count--;
		}
		count++;
	}
	printf("%d", count);
}

