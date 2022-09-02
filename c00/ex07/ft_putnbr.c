/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:00:58 by josmmart          #+#    #+#             */
/*   Updated: 2022/09/02 11:28:20 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	l_nb;

	l_nb = nb;
	if (l_nb < 0)
	{
		ft_putchar('-');
		l_nb = (-l_nb);
	}
	if (l_nb > 9)
	{
		ft_putnbr(l_nb / 10);
		ft_putnbr(l_nb % 10);
	}
	else
	{
		ft_putchar(l_nb + '0');
	}
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	char *av = argv[1];
	int nbr = atoi(av);

	ft_putnbr(nbr);
	return (0);
}
*/
