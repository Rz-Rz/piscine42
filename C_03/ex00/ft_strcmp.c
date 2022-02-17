/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:24:36 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/17 15:16:02 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[];
	char	s2[];
	char	s3[];
	char	s4[];
	char	s5[];
	char	s6[];

    s1[] = "Test1";
    s2[] = "OK";
    s3[] = "Same";
    s4[] = "Size";
    s5[] = "Shorter";
    s6[] = "ThanMyself";
    printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
    printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
    printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
    printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
}
*/
