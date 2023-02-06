/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:10:14 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/16 22:11:37 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_two_digits(char nb1, char nb2)
{
	write(1, &nb1, 1);
	write(1, &nb2, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 < 99)
	{
		while (num2 <= 99)
		{
			print_two_digits('0' + (num1 / 10), '0' + (num1 % 10));
			write(1, " ", 1);
			print_two_digits('0' + (num2 / 10), '0' + (num2 % 10));
			if (num1 < 98 && num2 <= 99)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
