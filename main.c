#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*int main(void)
{
	printf("%zu\n", ft_strlen("Hello World"));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("42"));
	return (0);
}*/

/*int main(void)
{
	char	*result;

	result = ft_strjoin("Hello ", "World");
	printf("%s\n", result);
	free(result);
	return (0);
}*/
/*int main(void)
{
	char	*result;

	result = ft_strtrim("  Hello World  ", " ");
	printf("[%s]\n", result);
	free(result);
	return (0);
}*/
//split

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello World 42", ' ');
	if (result == NULL)
		return (1);
	i = 0;
	while (result[i] != NULL)
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}