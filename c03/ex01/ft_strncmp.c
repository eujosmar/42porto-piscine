/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:42:18 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/29 19:52:07 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>      
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*s1, *s2;

	s1 = "Maria";
	s2 = "Josmar";
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 1));
	printf("%d\n", strncmp(s1, s2, 0));
}
*/
