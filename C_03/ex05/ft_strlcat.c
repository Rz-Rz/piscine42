/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:17:29 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/17 20:37:56 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *c);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i < size && dest[i])
		i++;
	if (i == size)
		return (i + src_len);
	j = -1;
	while ((++j + i) < size - 1 && src[j])
		dest[j + i] = src[j];
	dest[j + i] = '\0';
	return (i + src_len);
}

int	ft_strlen(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{

    char    s1a[10] = "Test1";
    char    s2a[] = "OK";
    char    s1b[10] = "Test1";
    char    s2b[] = "OK";
    char    s3a[10] = "Same";
    char    s4a[] = "Size";
    char    s3b[10] = "Same";
    char    s4b[] = "Size";
    char    s5a[20] = "Shorter";
    char    s6a[] = "ThanMyself";
    char    s5b[20] = "Shorter";
    char    s6b[] = "ThanMyself";
    char    s7a[20] = "Shorter";
    char    s8a[] = "ThanMyself";
    char    s7b[20] = "Shorter";
    char    s8b[] = "ThanMyself";
		printf("%d\t%ld\n", ft_strlcat(s1a, s2a, 6), strlcat(s1b, s2b, 6));
		printf("%d\t%ld\n", ft_strlcat(s3a, s4a, 10), strlcat(s3b, s4b, 10));
		printf("%d\t%ld\n", ft_strlcat(s5a, s6a, 4), strlcat(s5b, s6b, 4));
		printf("%d\t%ld\n", ft_strlcat(s7a, s8a, 0), strlcat(s7b, s8b, 0));
		printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a,
					s2b) == 0 ? "Success" : "Fail");
		printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a,
					s4b) == 0 ? "Success" : "Fail");
		printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a,
					s6b) == 0 ? "Success" : "Fail");
		printf("%s\n", strcmp(s7a, s7b) == 0 && strcmp(s8a,
					s8b) == 0 ? "Success" : "Fail");
			
		printf("\n\nDetails:\n");
		printf("%s:%s\n%s:%s\n", s1a, s2a, s1b, s2b);
		printf("%s:%s\n%s:%s\n", s3a, s4a, s3b, s4b);
		printf("%s:%s\n%s:%s\n", s5a, s6a, s5b, s6b);
		printf("%s:%s\n%s:%s\n", s7a, s8a, s7b, s8b);
			
}
*/
