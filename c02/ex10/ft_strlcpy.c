/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:51:01 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/29 11:20:06 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
usigned int ft_strlcpy(char *dest , char *src, unsigned int size);
int 	main(void)
{
	char	dest[50];
	char	*src;
	int	size;

	src = "Isso e um teste que você vê.";
	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
}
*/
