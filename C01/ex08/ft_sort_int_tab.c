/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:38:07 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/23 14:38:09 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *nb1, int *nb2)
{
	int	tmp;

	tmp = *nb1;
	*nb1 = *nb2;
	*nb2 = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	flag;

	flag = 1;
	counter = 0;
	while (counter < size - 1)
	{
		if (tab[counter] > tab[counter + 1])
		{
			ft_swap(&tab[counter], &tab[counter + 1]);
			flag = 0;
		}
		if (counter == size - 2 && flag == 0)
		{
			counter = -1;
			flag = 1;
		}
		counter++;
	}
}
