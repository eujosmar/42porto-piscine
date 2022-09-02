/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:07:24 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/30 14:07:47 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	number;

	number = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		number = number * nb;
		power--;
	}
	return (number);
}
/*
int main (int argc, char **argv)
{
	int i;
	i = ft_iterative_power(atoi(argv[argc-2]), atoi(argv[argc-1]));
	printf("%d ", i);
}
*/
