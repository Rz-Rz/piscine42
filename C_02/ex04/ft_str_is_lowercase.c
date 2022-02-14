/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:26:34 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/14 15:06:36 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);
/*
#include <stdio.h>
int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_lowercase("")?"OK":"Fail",
			ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXZad")?"OK":"Fail",
			!ft_str_is_lowercase("0123456789")?"OK":"Fail",
			!ft_str_is_lowercase(" ")?"OK":"Fail",
			!ft_str_is_lowercase("\\")?"OK":"Fail",
			!ft_str_is_lowercase("\n")?"OK":"Fail");
}
*/

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
