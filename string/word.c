#include<stdio.h>
#include<string.h>
int	main()
{
	char	str[1000000];
	int	i,a, result, select;
	int	count[26] = { 0 };
	scanf("%s", str);
	for (i = 0; i < strlen(str);i++)
	{
		if ('a' <=str[i] && str[i] <= 'z')
		{
			count[str[i] - 'a']++;
		}
		else if ('A'<=str[i] && str[i] <= 'Z')
		{
			count[str[i] - 'A']++;
		}
	}
	a = 0;
	result = 0;
	for(i = 0; i < 26; i++)
	{
		if (a < count[i])
		{
			a = count[i];
			select = i;
		}
	}
	for(i = 0; i < 26; i++)
		if ( a == count[i])
			result++;
	if (result > 1)
		printf("?");
	else
		printf("%c", select + 'A');
}
