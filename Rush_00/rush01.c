/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayildiz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:03:31 by ayildiz           #+#    #+#             */
/*   Updated: 2022/02/05 18:01:20 by ayildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int longu, int haut)
{
	int		l;
	int		h;

	h = 0;
	l = 0;
	while (h < haut)
	{
		l = 0;
		while (l < longu)
		{
			if ((l == 0 && h == 0) || (h == haut - 1 && l == longu - 1))
				ft_putchar('/');
			else if ((l == longu - 1 && h == 0) || (h == haut - 1 && l == 0))
				ft_putchar('\\');
			else if (!(l == longu - 1 || h == haut - 1 || h == 0 || l == 0))
				ft_putchar(' ');
			else
				ft_putchar('*');
			l++;
		}
		ft_putchar('\n');
		h++;
	}
}
