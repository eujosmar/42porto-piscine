/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:18:30 by josmmart          #+#    #+#             */
/*   Updated: 2022/08/29 20:17:02 by josmmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char str)
{
	if (str == '\0')
	{
		return (0);
	}
	if (!((str >= 0 && str <= 31) || str >= 127))
	{
		return (0);
	}
	return (1);
}

void	print_hex(unsigned char tens, unsigned char ones)
{
	ft_putchar('\\');
	ft_putchar(tens);
	ft_putchar(ones);
}

void	calc_hex(unsigned char c)
{
	unsigned char	tens;
	unsigned char	ones;

	if ((c % 16) > 9)
	{
		tens = (c / 16) + '0';
		ones = (c % 16) + 87;
		print_hex(tens, ones);
	}
	if ((c % 16) < 9)
	{
		tens = (c / 16) + '0';
		ones = (c % 16) + '0';
		print_hex(tens, ones);
	}
	if (c == 127)
	{
		ft_putchar('\\');
		ft_putchar('1');
		ft_putchar('2');
		ft_putchar('7');
	}
}

void	ft_putstr_non_printable(unsigned char *str)
{
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
		{
			calc_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Oi\nvoce esta bem?");
	return(0);
}
*/
