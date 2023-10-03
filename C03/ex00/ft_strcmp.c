/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:34:34 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/12 12:04:08 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "world"));
	printf("%d\n", ft_strcmp("HelloWorld", "hello"));
	printf("%d\n", ft_strcmp("Hello", "hello world"));
	printf("%d\n", ft_strcmp("Salut", "les amis"));
	printf("%d\n", ft_strcmp("Salut les", "amis"));
}*/
