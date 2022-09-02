/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:49:03 by josmmart          #+#    #+#             */
/*   Updated: 2022/09/02 11:20:17 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	int	i;

	i = 1;
	while (n >= 0 && i == 1)
	{
		write(1, "P", 1);
		i = 0;
	}
	while (n < 0 && i == 1)
	{
		write(1, "N", 1);
		i = 0;
	}
}
/*
int	main(void)
{
	ft_is_negative(-2);
	return (0);
}
*/
