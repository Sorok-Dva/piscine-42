/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:06:21 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/10 14:09:00 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "hello world\n";
	char str2[] = "Hello World\n";
	char str3[] = "42A !\n";
	printf("%s", ft_strlowcase(str1));
	printf("%s", ft_strlowcase(str2));
	printf("%s", ft_strlowcase(str3));
}*/
