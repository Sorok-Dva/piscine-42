/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:20:29 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/10 20:02:34 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

/*int	main(void)
{
	char	source[8] = {'H', 'e', 'l', 'l', 'o', ' ', '!', '\0'};
	char	test[] = {'T', 'e', 's', 't', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

	ft_strncpy(test, source, 5);

	printf("%s", test);
	return (0);
}*/
