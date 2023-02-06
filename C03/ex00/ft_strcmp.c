/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oloshcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:10:08 by oloshcha          #+#    #+#             */
/*   Updated: 2022/11/23 22:13:55 by oloshcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
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

	
	//test2
	char *s1 = "AB";
	char *s2 = "ABC";
	
	
	diff = ft_strcmp(s1, s2);
	diff2 = strcmp(s1, s2);
	printf("diff %s and %s  = %d \n", s1, s2, diff);
	printf("diff2 %s and %s  = %d", s1, s2, diff2);
	return (0);
}
*/
