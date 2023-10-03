/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:48:07 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/12 12:44:01 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*it1;
	char	*it2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			it1 = str + 1;
			it2 = to_find + 1;
			while (*it1 && *it2 && *it1 == *it2)
			{
				++it1;
				++it2;
			}
			if (!*it2)
				return (str);
		}
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strstr("Hello world", ""));
	printf("%s\n", ft_strstr("Hello world", "world"));
	printf("%s\n", ft_strstr("Hello World", "world"));
	printf("%s\n", ft_strstr("Born to swim at 42", "42"));
}*/
