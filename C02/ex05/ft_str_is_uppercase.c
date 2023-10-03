/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:05:57 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/09 15:33:31 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[0] == '\0')
		result = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("HELLOWORLD"));
	printf("%d\n", ft_str_is_uppercase("HelloWorld"));
	printf("%d\n", ft_str_is_uppercase("HELLO WORLD"));
	printf("%d\n", ft_str_is_uppercase("Hello World"));
	printf("%d\n", ft_str_is_uppercase("hello world"));
	printf("%d\n", ft_str_is_uppercase("Hello World !"));
	printf("%d\n", ft_str_is_uppercase("42"));
}*/
