/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:47:16 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/17 15:56:21 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	printf("%s:%s\n", ft_strcat(s1a, s2a), strcat(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a,
				s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strcat(s3a, s4a), strcat(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a,
				s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strcat(s5a, s6a), strcat(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a,
				s6b) == 0 ? "Success" : "Fail");
}
*/
