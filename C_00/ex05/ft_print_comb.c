/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:05:26 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/06 15:27:51 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print(char *arr_param);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *arr_param)
{
	int	i;

	i = 0;
	while (i < 3)
		ft_putchar(arr_param[i++]);
	if (!(arr_param[0] == '7' && arr_param[1] == '8' && arr_param[2] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	n_arr[3];

	n_arr[0] = '0';
	n_arr[1] = '0';
	n_arr[2] = '0';
	while (n_arr[0] <= '9')
	{
		n_arr[1] = n_arr[0] + 1;
		while (n_arr[1] <= '9')
		{
			n_arr[2] = n_arr[1] + 1;
			while (n_arr[2] <= '9')
			{
				if (n_arr[0] < n_arr[1] && n_arr[1] < n_arr[2])
					ft_print(n_arr);
				n_arr[2]++;
			}
			n_arr[1]++;
		}
		n_arr[0]++;
	}
}
