/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:19:38 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/23 22:19:40 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	ptr = ptr + ft_strlen(dest);
	while (*src != '\0' && nb != 0)
	{
		*ptr = *src;
		src++;
		ptr++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[7] = "H ";
	char s2[4] = "Olga";
	//printf("%s\n", ft_strncat(s1, s2, 3));
	printf("%s\n", strncat(s1, s2, 3));
	//printf("%d", ft_strlen(s1));
	
	return (0);
}*/
