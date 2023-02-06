/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:47:37 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/29 21:47:38 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	return (i);
}

int	sign_nb(char *str, int idx)
{
	int	sign;

	sign = 1;
	while (str[idx] == '-' || str[idx] == '+' || str[idx] == ' '
		|| (str[idx] >= 9 && str[idx] <= 13))
	{
		if (str[idx] == '-')
			sign *= -1;
		else if (str[idx] == '+')
		{
			idx++;
			continue ;
		}
		else if (str[idx] == ' ' || (str[idx] >= 9 && str[idx] <= 13))
			return (0);
		idx++;
	}
	return (sign);
}

int	idx_to_nb(char *str, int idx)
{
	while (str[idx] == '-' || str[idx] == '+')
		idx++;
	return (idx);
}

int	process_nb(char *str, int idx)
{
	int	res;

	res = 0;
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		res = res * 10 + str[idx] - '0';
		idx++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	idx;
	int	sign;
	int	res;

	res = 0;
	idx = ft_isspace(str);
	sign = sign_nb(str, idx);
	idx = idx_to_nb(str, idx);
	if (sign == 0)
		return (0);
	else
	{
		if (str[idx] >= 48 && str[idx] <= 57)
		{
			res = process_nb(str, idx);
		}
		else
			return (0);
	}
	return (res * sign);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "  ----++347jhsf7438";
	char str2[] = "  --- -++\t347jhsf7438";
	char str3[] = "  ----++3\t47jhsf7438";
	char str4[] = "  -\t---++3 47jhsf7438";
	char str5[] = "-";
	char str6[] = "-4-";
	char str7[] = "+14-";
	char str8[] = "+--4-";
	char str9[] = "";
	char str10[] = "\t";
	
	printf("%d \n", ft_atoi(str1));
	printf("%d \n", ft_atoi(str2));
	printf("%d \n", ft_atoi(str3));
	printf("%d \n", ft_atoi(str4));
	printf("%d \n", ft_atoi(str5));
	printf("%d \n", ft_atoi(str6));
	printf("%d \n", ft_atoi(str7));
	printf("%d \n", ft_atoi(str8));
	printf("%d \n", ft_atoi(str9));
	printf("%d \n", ft_atoi(str10));
}*/
