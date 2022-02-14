/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:55:36 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/14 15:09:03 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str);

/*
#include <stdio.h>
int		main()
{
	char	c;

	c = 1;
	while (c != 0)
	{
		if ((c < ' ' || c > '~') == ft_str_is_printable(&c))
		{
			printf("Fail for char in decimal: %d\n", (int)c);
			return (0);
		}
		c++;
	}

	printf("Success\n");
}
*/

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != 0)
	{
		c = str[i];
		if (c < ' ' || c > '~')
			return (0);
		i++;
	}
	return (1);
}
