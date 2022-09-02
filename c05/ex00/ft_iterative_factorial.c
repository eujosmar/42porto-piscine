/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:07:31 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/30 14:04:50 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 1)
	{
		number = number * nb;
		nb--;
	}
	return (number);
}
/*
int	main (int argc, char **argv)
{
	int	i;
	i = ft_iterative_factorial(atoi(argv[arvc-1]));
	printf("%d ", i);
}
*/
