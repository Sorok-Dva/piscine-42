/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llgarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:31:02 by llgarcia          #+#    #+#             */
/*   Updated: 2023/09/10 18:10:28 by llgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "hello world ! how are you ?\n";
	char str2[] = "hello world !\thOw are you ?\n";
	char str3[] = "HELLO WORLD ! HOW ARE YOU ?\n";
	char str4[] = "{hello} {world}\n";
	char str5[] = "42 HELLO WORLD ! 42a\n";
	char str6[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";
	printf("%s", ft_strcapitalize(str1));
	printf("%s", ft_strcapitalize(str2));
	printf("%s", ft_strcapitalize(str3));
	printf("%s", ft_strcapitalize(str4));
	printf("%s", ft_strcapitalize(str5));
	printf("%s", ft_strcapitalize(str6));
}*/
