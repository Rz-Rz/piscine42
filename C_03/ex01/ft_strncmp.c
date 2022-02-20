/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:35:23 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/20 17:51:59 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n - 1)
		i++;
	if (s1[i] != s2[i] && (n != 0))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{

    char    s1[] = {0x01, 0x0a, 0x81, 0x99, 0x00};
    char    s2[] = {0x01, 0x0a, 0x01, 0x99, 0x00};
    char    s3[] = "Same";
    char    s4[] = "Size";
    char    s5[] = "Shorter";
    char    s6[] = "ThanMyself";
    char    s7[] = "ShorterTest";
    char    s8[] = "";
    printf("%d, %d\n", ft_strncmp(s1, s2, 42), strncmp(s1, s2, 42));
    printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
    printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
    printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
    printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
    printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
    printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
    printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
    printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
    printf("%d, %d\n", ft_strncmp(s8, s7, 8), strncmp(s8, s7, 8));
}
*/
