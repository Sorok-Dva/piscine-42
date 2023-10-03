/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:21:51 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/10 17:17:56 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
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
		else if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("HelloWorld"));
	printf("%d\n", ft_str_is_alpha("helloworld"));
	printf("%d\n", ft_str_is_alpha("Hello World"));
	printf("%d\n", ft_str_is_alpha("HELLO WORLD"));
	printf("%d\n", ft_str_is_alpha("hello world"));
	printf("%d\n", ft_str_is_alpha("hello\tworld"));
	printf("%d\n", ft_str_is_alpha("Hello World !"));
	printf("%d\n", ft_str_is_alpha("42"));
}*/
