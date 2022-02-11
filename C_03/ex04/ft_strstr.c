/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:53:06 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/10 18:34:48 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <bsd/string.h>
#include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1a[];
	char	s2a[];
	char	s1b[];
	char	s2b[];
	char	s3a[];
	char	s4a[];
	char	s3b[];
	char	s4b[];
	char	s5a[];
	char	s6a[];
	char	s5b[];
	char	s6b[];
	char	s7a[];
	char	s7b[];

		s1a[] = "This is OK for now";
		s2a[] = "OK";
		s1b[] = "This is OK for now";
		s2b[] = "OK";
		s3a[] = "Same";
		s4a[] = "";
		s3b[] = "Same";
		s4b[] = "";
		s5a[] = "Shorter";
		s6a[] = "Than";
		s5b[] = "Shorter";
		s6b[] = "Than";
		s7a[] = "Ssssalut";
		s7b[] = "salut";
		printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
		printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
		printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
		printf("%s:%s\n", ft_strstr(s7a, s7b), strstr(s7a, s7b));
}
*/
