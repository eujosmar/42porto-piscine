/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:18:03 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/30 14:00:39 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_d;
	unsigned int	size_s;

	i = ft_strlen(dest);
	j = 0;
	size_d = ft_strlen(dest);
	size_s = ft_strlen(src);
	if (size < 1)
		return (size_s + size);
	while (src[j] && i < size - 1)
	{
		dest[size_d + j] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < size_d)
		return (size_s + size);
	else
		return (size_d + size_s);
}
/*
int	main(void)
{
	char		dest[50] = "Josmar";
	char		src[50] = " Patrick"; 
	unsigned int	size;


	size = 50;
	printf("%d\n",ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}
*/
