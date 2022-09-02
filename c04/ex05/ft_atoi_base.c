/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:06:29 by josmmart          #+#    #+#             */
/*   Updated: 2022/09/02 14:23:40 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_ver_bas(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\t'|| base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_mult_nbr(char d, char *base, int mult, int nbr)
{
	int	c;

	c = 0;
	while (base[c] != '\0')
	{
		if (d == base[c])
			return (nbr + (mult * c));
		c++;
	}
	return (nbr);
}

int	ft_isbase(char n, char *base)
{
	int	c;

	c = 0;
	if (n == '\n' || n == '\t' || n == '\v' || n == '\f' || n == '\r'
		|| n == ' ' || n == '+' || n == '-')
		return (1);
	while (base[c] != '\0')
	{
		if (base[c] == n)
			return (2);
		c++;
	}
	return (0);
}

int	ft_atoi_simpl(char *str, char *base, int size, int start)
{
	int	c;
	int	s;
	int	res;
	int	mult;

	c = start - 1;
	s = 1;
	res = 0;
	mult = 1;
	while (c >= 0)
	{
		if (str[c] == '-')
			s *= (-1);
		if (ft_isbase(str[c], base) == 2)
		{
			res = ft_mult_nbr(str[c], base, mult, res);
			mult *= size;
		}
		c--;
	}
	return (res * s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	c;

	size = 0;
	c = 0;
	if (ft_ver_bas(base) == 0)
		return (0);
	while (base[size] != '\0')
		size++;
	while (str[c] == '\n' || str[c] == '\t' || str[c] == '\v'
		|| str[c] == '\f' || str[c] == '\r' || str[c] == ' ')
		c++;
	while (str[c] == '-' || str[c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
		c++;
	return (ft_atoi_simpl(str, base, size, c));
}
/*
int ft_atoi_base(char *str, char *base);

int main(void)
{
		printf("%d\n", ft_atoi_base("  -+-042 + 893 --", "12	34567189"));
}
*/
