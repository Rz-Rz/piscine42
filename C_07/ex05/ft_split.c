/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:13:50 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/23 17:41:46 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int	ft_cw(char *str, char *charset)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (ft_sep(str[i], charset))
			i++;
		while (!(ft_sep(str[i], charset)) && str[i])
			i++;
		if ((ft_sep(str[i], charset) || str[i] == '\0') && !(ft_sep(str[i - 1],
					charset)))
			w++;
		i++;
	}
	return (w);
}

char	*ft_strdup(char *src, char *charset)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (src[i] && !(ft_sep(src[i], charset)))
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	j = -1;
	while (src[++j] && j < i)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		w;
	char	**dest;

	w = ft_cw(str, charset);
	dest = malloc(sizeof(char *) * (w + 1));
	if (!dest)
		return (NULL);
	i = -1;
	j = 0;
	dest[w - 1] = NULL;
	while (++i < w)
	{
		while (ft_sep(str[j], charset))
			j++;
		if (!(ft_sep(str[j], charset)) && str[j])
			dest[i] = ft_strdup(&str[j], charset);
		while (!(ft_sep(str[j], charset)) && str[j])
			j++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*megastring;
    char **tab;
	int		i;

    megastring = "";
    tab = ft_split(megastring, " #");
    i = 0;
    while (tab[i])
        printf(">%s< \n", tab[i++]);
    return (0);
}
*/
