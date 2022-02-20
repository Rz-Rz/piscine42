/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:49:27 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/20 15:53:16 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_revparams(char **av, int ac)
{
	int	j;
	int	i;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if ((ft_strcmp(av[i], av[j])) > 0)
			{
				ft_strswap(&av[i], &av[j]);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	nl;

	ft_revparams(argv, argc);
	i = 1;
	nl = '\n';
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, &nl, 1);
		i++;
	}
	return (0);
}
