/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:48:44 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/29 21:48:46 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	char_duplicates(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_input(char *base)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (0);
	while (base[i])
	{
		if (base[i] < 32 || base[i] == 127 || base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (char_duplicates(base) == 0)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	l_nbr;

	l_nbr = nbr;
	if (check_input(base) == 1)
	{
		len_base = ft_strlen(base);
		if (l_nbr < 0)
		{
			ft_putchar('-');
			l_nbr = -l_nbr;
		}
		if (l_nbr >= len_base)
		{
			ft_putnbr_base(l_nbr / len_base, base);
			ft_putnbr_base(l_nbr % len_base, base);
		}
		else if (l_nbr < len_base)
		{
			ft_putchar(base[l_nbr]);
		}
	}
}
/*
#include <stdio.h>

int main(void)
{
	int nbr;
	
	nbr = -42;
	//nbr = 2147483647;
	ft_putnbr_base(nbr, "0");					//error base
	ft_putnbr_base(nbr, "0113456789");			//error base		
	ft_putnbr_base(nbr, "\n");					//error base
	ft_putnbr_base(nbr, "");					//error base
	ft_putnbr_base(nbr, "+013456789");			//error base
	ft_putnbr_base(nbr, "0123456789");			//decimal numbers
	printf("\n");
	ft_putnbr_base(nbr, "01");					//binary base system
	printf("\n");
	ft_putnbr_base(nbr, "0123456789ABCDEF");	//hexadecimal base system
	printf("\n");
	ft_putnbr_base(nbr, "poneyvif");			//octal base system
	return (0);
}*/
