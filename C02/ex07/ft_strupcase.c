/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:28:50 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/10 14:09:22 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "hello world\n";
	char str2[] = "Hello World\n";
	char str3[] = "42a !\n";
	printf("%s", ft_strupcase(str1));
	printf("%s", ft_strupcase(str2));
	printf("%s", ft_strupcase(str3));
}*/
