/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:47:17 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/09 15:27:27 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[0] == '\0')
		result = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("Hello World"));
	printf("%d\n", ft_str_is_numeric("HELLO WORLD"));
	printf("%d\n", ft_str_is_numeric("hello world"));
	printf("%d\n", ft_str_is_numeric("Hello World !"));
	printf("%d\n", ft_str_is_numeric("42 42"));
	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric("0"));
	printf("%d\n", ft_str_is_numeric("123456789"));
}*/
