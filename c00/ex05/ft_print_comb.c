/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:56:40 by josmmart          #+#    #+#             */
/*   Updated: 2022/09/02 11:21:40 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_varschars(char x, char y, char z)
{
	ft_putchar(x + '0');
	ft_putchar(y + '0');
	ft_putchar(z + '0');
}

void	ft_print_comb(void)
{
	int	cen;
	int	dez;
	int	uni;

	cen = 0;
	while (cen <= 7)
	{
		dez = cen + 1;
		while (dez <= 8)
		{
			uni = dez + 1;
			while (uni <= 9)
			{
				ft_varschars(cen, dez, uni);
				if (cen != 7 || dez != 8 || uni != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				uni++;
			}
			dez++;
		}
		cen++;
	}
}
/*
int 	main(void)
{
	ft_print_comb();
	return (0);
}
*/
