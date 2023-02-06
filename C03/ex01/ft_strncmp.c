/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:16:46 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/23 22:16:48 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;

	if (n == 0)
		return (0);
	while (*s1 != '\0' && (*s1 == *s2) && n != 0)
	{
		--n;
		if (n)
		{
			++s1;
			++s2;
		}
	}
	diff = *s1 - *s2;
	return (diff);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	int diff;
	int diff2;
	
	//test2
	char *s1 = "ASDA";
	char *s2 = "ASDV";
	
	//test1
	char *s1 = "ABC";
	char *s2 = "AB";

	//test2
	char *s1 = "AB";
	char *s2 = "ABC";
	
	//test3
	char *s1 = "AB";
	char *s2 = "AB";
	
	//test4
	char *s1 = "ABC";
	char *s2 = "ABD";
	
	//test5
	char *s1 = "ABC";
	char *s2 = "B";
	
	diff = ft_strncmp(s1, s2, 3);
	diff2 = strncmp(s1, s2, 3);
	printf("diff %s and %s  = %d \n", s1, s2, diff);
	printf("diff2 %s and %s  = %d", s1, s2, diff2);
	return (0);
}*/
