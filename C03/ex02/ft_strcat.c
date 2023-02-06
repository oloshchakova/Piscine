/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:17:53 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/23 22:17:55 by oloshcha         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	ptr = ptr + ft_strlen(dest);
	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[5] = "H";
	char s2[5] = "Olga";
	//printf("%s \n", ft_strcat(s1, s2));
	printf("%s \n", strcat(s1, s2));
	//printf("%d", ft_strlen(s1));
	
	return (0);
}*/
