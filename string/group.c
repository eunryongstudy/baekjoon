#include<stdio.h>
#include<string.h>
int	main()
{
	int	num, result;
	scanf("%d", &num);
	result = num;
	for (int i = 0; i < num; i++)
	{
		char str[101];
		int	flag[26] = { 0 };
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] != str[j + 1])
				flag[str[j] - 'a']++;
		}
		for (int j = 0; j < 26; j++)
		{
			if (flag[j] > 1)
			{
				result--;
				break;
			}
		}
	}
	printf("%d", result);
}

