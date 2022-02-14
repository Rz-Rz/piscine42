/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:59:33 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/14 13:25:50 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str);

/*
int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"OK":"Fail",
            ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
            ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_alpha("1")?"OK":"Fail",
			!ft_str_is_alpha(" ")?"OK":"Fail",
			!ft_str_is_alpha("\\")?"OK":"Fail",
			!ft_str_is_alpha("\n")?"OK":"Fail");
}
*/

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
