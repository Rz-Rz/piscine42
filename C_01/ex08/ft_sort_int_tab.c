/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:56:36 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/07 16:01:55 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
		int	tmp;

		tmp = *a;
		*a = *b;
		*b = tmp;
}

void ft_sort_int_tab(int *tab, int size)
{
		int	i;
		int	j;

		i = 0;
		j = 0;

		while (i < size - 1)
		{
				while (j < size - i - 1)	
				{
						if (tab[j] > tab[j+1])
								ft_swap(&tab[j], &tab[j + 1]);
						j++;
				}
				i++;
				j = 0;
		}
}

int	main(void)
{
	int	tab[9] = {39, 1, 2, 40, 41, 39, 12, 15, 79};
	int x;
	ft_sort_int_tab(tab, 9);
	x = 0;
	while (x < 9)
		printf("%d\t", tab[x++]);
}
