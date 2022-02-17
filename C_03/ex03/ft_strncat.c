/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:31:16 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/17 20:33:03 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (nb == 0)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{

    char    s1a[10] = "Test1";
    char    s2a[] = "OK";
    char    s1b[10] = "Test1";
    char    s2b[] = "OK";
    char    s3a[10] = "Same";
    char    s4a[10] = "Size";
    char    s3b[10] = "Same";
    char    s4b[10] = "Size";
    char    s5a[20] = "Shorter";
    char    s6a[] = "ThanMyself";
    char    s5b[20] = "Shorter";
    char    s6b[] = "ThanMyself";
	printf("%s:%s\n", ft_strncat(s1a, s2a, 5), strncat(s1b, s2b, 5));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a,
				s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s3a, s4a, 10), strncat(s3b, s4b, 10));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a,
				s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s5a, s6a, 0), strncat(s5b, s6b, 0));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a,
				s6b) == 0 ? "Success" : "Fail");
}
*/
