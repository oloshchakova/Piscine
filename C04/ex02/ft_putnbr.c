/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:47:08 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/29 21:47:10 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_big_number(int nb)
{
	int		i;
	int		nb_first;
	char	char_nb;

	nb_first = nb;
	i = 1;
	while (nb_first >= 10)
	{
		nb_first = nb_first / 10;
		i = i * 10;
	}
	while (i >= 1)
	{
		char_nb = '0' + nb / i;
		ft_putchar(char_nb);
		nb = nb % i;
		i = i / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		print_big_number(nb);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar('0' + nb % 10);
	}
}
/*
int main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(0);
	ft_putnbr(-2);
	ft_putnbr(-200);
	ft_putnbr(100001);
}*/
