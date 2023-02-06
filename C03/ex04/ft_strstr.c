/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:21:20 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/23 22:21:23 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;

	ptr = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find && *to_find != '\0')
		{
			ptr = str;
			while (*str == *to_find && *to_find != '\0')
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (ptr);
			else if (*str != *to_find || *to_find != '\0')
				return (0);
		}
		str++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "world";
	char	*str2 = "ld";

	printf("%s \n", ft_strstr(str1, str2));
	printf("%s \n", strstr(str1, str2));
}*/
