/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:02:23 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/23 18:14:54 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*scpy;

	scpy = malloc(sizeof(char) * (ft_strlen(src)) + 1);
	if (!scpy)
		return (0);
	i = 0;
	while (i < ft_strlen(src) && src[i])
	{
		scpy[i] = src[i];
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n",// strcmp(strdup("Test"),
				ft_strdup("Test"));// == 0 ? "OK" : "Fail");
	printf("%s\n",
			strcmp(strdup("r55er55"),
				ft_strdup("r55er55")) == 0 ? "OK" : "Fail");
}
*/
