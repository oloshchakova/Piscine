/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:15:29 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/22 23:15:31 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *nb1, int *nb2)
{
	int	tmp;

	tmp = *nb1;
	*nb1 = *nb2;
	*nb2 = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;

	counter = 0;
	while (counter < (size / 2))
	{
		ft_swap(&tab[counter], &tab[size - counter - 1]);
		counter++;
	}
}
