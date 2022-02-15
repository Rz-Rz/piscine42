/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:08:08 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/15 16:01:32 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
/*
int	main(void)
{
	char	src1a[];
	char	dest1a[];
	char	src1b[];
	char	dest1b[];
	char	src2a[];
	char	dest2a[];
	char	src2b[];
	char	dest2b[];
	char	src3a[];
	char	dest3a[];
	char	src3b[];
	char	dest3b[];
	char	src4a[];
	char	dest4a[];
	char	src4b[];
	char	dest4b[];

	src1a[] = "abcde";
	dest1a[] = "1234567";
	src1b[] = "abcde";
	dest1b[] = "1234567";
	src2a[] = "abcd";
	dest2a[] = "123";
	src2b[] = "abcd";
	dest2b[] = "123";
	src3a[] = "";
	dest3a[] = "";
	src3b[] = "";
	dest3b[] = "";
	src4a[] = "12345";
	dest4a[] = "abc";
	src4b[] = "12345";
	dest4b[] = "abc";
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_strlcpy(dest1a, src1a, 0) == strlcpy(dest1b, src1b,
					0) ? "Pass" : "Fail",
			strcmp(dest1a, dest1b) == 0 && strcmp(src1a,
					src1b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest2a, src2a, 3) == strlcpy(dest2b, src2b,
					3) ? "Pass" : "Fail",
			strcmp(dest2a, dest2b) == 0 && strcmp(src2a,
					src2b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest3a, src3a, 0) == strlcpy(dest3b, src3b,
					0) ? "Pass" : "Fail",
			strcmp(dest3a, dest3b) == 0 && strcmp(src3a,
					src3b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest4a, src4a, 2) == strlcpy(dest4b, src4b,
					2) ? "Pass" : "Fail",
			strcmp(dest4a, dest4b) == 0 && strcmp(src4a,
					src4b) == 0 ? "Pass" : "Fail");
    printf("%d \t %ld\n", ft_strlcpy(dest1a, src1a, 0), strlcpy(dest1b, src1b,
			0));
}
*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && dest[i])
	{
		if (i == (size - 1))
			break ;
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
