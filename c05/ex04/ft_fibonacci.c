/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:09:29 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/30 14:09:58 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int	number;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		number = ft_fibonacci(index - 1);
		number = number + ft_fibonacci(index - 2);
	}
	return (number);
}
/*
int main (int argc, char **argv)
{
	for (int i = 0; i <= atoi(argv[argc-1]); i++)
		printf("%d, ",ft_fibonacci(i));
}
*/
