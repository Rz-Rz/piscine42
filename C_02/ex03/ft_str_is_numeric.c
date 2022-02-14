/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:23:29 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/14 13:57:15 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *src);
/*
int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_numeric("")?"OK":"Fail",
			!ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
			!ft_str_is_numeric("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			ft_str_is_numeric("0123456789")?"OK":"Fail",
			!ft_str_is_numeric(" ")?"OK":"Fail",
			!ft_str_is_numeric("\\")?"OK":"Fail",
			!ft_str_is_numeric("\n")?"OK":"Fail");
}
*/

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= '0' && c <= '9'))
			return (0);
		i++;
	}
	return (1);
}
