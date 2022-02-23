/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:13:50 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/23 10:13:52 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_sep(char c, char *charset)
{
		int i;

		i = -1;
		while(charset[++i])
				if (c == charset[i])
						return(1);
		return (0);

}

int ft_wl(char *str, char *charset)
{
		int i;
		int c;

		i = 0;
		c = 0;
		while (str[i])
		{
				while (ft_sep(str[i], charset))
						i++;
				while (!(ft_sep(str[i], charset) && str[i]))
				{
						c++;
						i++;
				}
				if ((ft_sep(str[i], charset) || str[i] == '\0') && !(ft_sep(str[i - 1], charset)))
						return (c);
				i++;
		}
		return (0);
}


int ft_cw(char *str, char *charset)
{
		int i;
		int j;
		int w;

		i = 0;
		w = 0;
		while (str[i])
		{
				while (ft_sep(str[i], charset))
						i++;
				while (!(ft_sep(str[i], charset)) && str[i])
						i++;
				if (ft_sep(str[i], charset) && !(ft_sep(str[i - 1], charset)))
						w++;
				i++;
		}
		return (w);
}

char **ft_split(char *str, char *charset)
{
		int i;
		int j;
		int w;
		char **dest;


		w = ft_cw(str, charset);
		*dest = malloc(sizeof(char*) * (w + 1));

		i = -1;
		while (dest[++i])
		{

				
				dest[i] = malloc();
				j = 0;


		}
}
