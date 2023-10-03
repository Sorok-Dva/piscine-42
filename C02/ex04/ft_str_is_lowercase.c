/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:52:30 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/09 15:28:46 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[0] == '\0')
		result = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			result = 1;
		else
			result = 0;
		if (result == 0)
			break ;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("helloworld"));
	printf("%d\n", ft_str_is_lowercase("helloWorld"));
	printf("%d\n", ft_str_is_lowercase("hello world"));
	printf("%d\n", ft_str_is_lowercase("Hello World"));
	printf("%d\n", ft_str_is_lowercase("HELLO WORLD"));
	printf("%d\n", ft_str_is_lowercase("Hello World !"));
	printf("%d\n", ft_str_is_lowercase("42"));
}*/
