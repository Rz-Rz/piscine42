/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:32:02 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/15 16:26:59 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	print(int r, char d);

void	ft_putchar(char c);

void	ft_convert_dectohex(char d);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 126 || str[i] < 32)
		{
			ft_putchar('\\');
			ft_convert_dectohex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_convert_dectohex(char d)
{
	int	r;
	int	i;

	i = 0;
	while (d != 0)
	{
		if (d < 16 && i == 0)
		{
			print(r, d);
		}
		else
		{
			r = d % 16;
			if (r < 10)
				ft_putchar(r + 48);
			else
				ft_putchar(r + 87);
		}
		i++;
		d = d / 16;
	}
}

void	print(int r, char d)
{
	r = d % 16;
	if (r < 10)
	{
		ft_putchar('0');
		ft_putchar(r + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(r + 87);
	}
}

/*
void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "Coucou\ftu\bvas\abien ?";
	ft_putstr("Coucou\ftu\bvas\abien ?");
	ft_putstr_non_printable(d);
}
*/
