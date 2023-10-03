/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:27:44 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/10 17:21:22 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("Hello World"));
	printf("%d\n", ft_str_is_printable("42"));
	printf("%d\n", ft_str_is_printable("Hello\tWorld"));
	printf("%d\n", ft_str_is_printable("\t"));
}*/
