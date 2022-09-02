/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:27:19 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/29 11:24:19 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[i - 1] >= 97 && str[i - 1] <= 122)
	{
		str[i - 1] -= 32;
	}
	while (str[i])
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') \
		|| (str[i - 1] >= 'a' && str[i - 1] <= 'z') \
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
/*
char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf(".%s.\n", ft_strcapitalize(str));
}
*/
