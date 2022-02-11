/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:31:16 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/09 21:31:20 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	if (nb == 0)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j <= nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1a[10];
	char	s2a[];
	char	s1b[10];
	char	s2b[];
	char	s3a[10];
	char	s4a[10];
	char	s3b[10];
	char	s4b[10];
	char	s5a[20];
	char	s6a[];
	char	s5b[20];
	char	s6b[];

	s1a[10] = "Test1";
	s2a[] = "OK";
	s1b[10] = "Test1";
	s2b[] = "OK";
	s3a[10] = "Same";
	s4a[10] = "Size";
	s3b[10] = "Same";
	s4b[10] = "Size";
	s5a[20] = "Shorter";
	s6a[] = "ThanMyself";
	s5b[20] = "Shorter";
	s6b[] = "ThanMyself";
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
