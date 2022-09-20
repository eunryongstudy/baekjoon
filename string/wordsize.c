#include<stdio.h>
#include<string.h>
int	main()
{
	char	str[1000000];
	int	i = 0, size = 0;
	scanf("%[^\n]", str);

	if(strlen(str) == 1)
		if(str[0] == ' ')
			printf("0");
	while (str[i] != '\0')
	{
		if(str[i] == ' ' && str[i])
			i++;
		while(str[i] != ' ' && str[i])
		{
			i++;
		}
		size++;
	}
	if(str[i - 1] == ' ')
		size -= 1;
	printf("%d", size);
}
