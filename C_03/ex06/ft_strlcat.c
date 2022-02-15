/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:15:18 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/15 10:02:45 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
*/

int				ft_strlen(char *c);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	src_len;

	src_len = ft_strlen(src);
	i = -1;
	while (++i < size && dest[i])
		i++;
	if (i == size)
		return ((unsigned int)i + src_len);
	j = -1;
	while ((++j + i) < size && src[j])
		dest[j + i] = src[j];
	dest[j + i] = '\0';
	return ((unsigned int)i + src_len);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	s1a[10];
	char	s2a[];
	char	s1b[10];
	char	s2b[];
	char	s3a[10];
	char	s4a[];
	char	s3b[10];
	char	s4b[];
	char	s5a[20];
	char	s6a[];
	char	s5b[20];
	char	s6b[];
	char	s7a[20];
	char	s8a[];
	char	s7b[20];
	char	s8b[];

		s1a[10] = "Test1";
		s2a[] = "OK";
		s1b[10] = "Test1";
		s2b[] = "OK";
		s3a[10] = "Same";
		s4a[] = "Size";
		s3b[10] = "Same";
		s4b[] = "Size";
		s5a[20] = "Shorter";
	s6a[] = "ThanMyself";
		s5b[20] = "Shorter";
		s6b[] = "ThanMyself";
		s7a[20] = "Shorter";
		s8a[] = "ThanMyself";
		s7b[20] = "Shorter";
		s8b[] = "ThanMyself";
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
