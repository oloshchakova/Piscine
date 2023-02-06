/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:04:17 by oloshcha          #+#    #+#             */
/*   Updated: 2022/12/08 19:04:22 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = i;
		while (str[++j])
		{
			if (str[j] == '+' || str[j] == '-' || str[j] == 32
				|| (str[j] > 8 && str[j] < 14))
				return (0);
			if (str[i] == str[j])
				return (0);
		}
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	base_contained(char c, char *base)
{
	while (*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return (0);
}

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			break ;
		i++;
	}
	return (i);
}

void	iterate_start(int *i, char *str, int *c_minus)
{
	while (str[*i] == ' ' || (str[*i] <= 13 && str[*i] >= 9))
		*i += 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*c_minus += 1;
		*i += 1;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	c_minus;
	int	to_return;
	int	len;

	i = 0;
	c_minus = 0;
	iterate_start(&i, str, &c_minus);
	len = -1;
	while (base[++len])
		continue ;
	to_return = 0;
	while (base_contained(str[i], base))
	{
		to_return *= len;
		to_return += find_index(str[i], base);
		i++;
	}
	if (c_minus % 2 == 1)
		to_return *= -1;
	return (to_return);
}
/*
int	main(void)
{
	printf("%d", ft_atoi_base("   -2A", "0123456789ABCDEF"));
	return (1);
}*/
