/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:39:08 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/13 21:43:49 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Prints a single char
void ft_putchar(char c)
{
	write(1, &c, 1);
}

//prints a list of characters
void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

//gives the length of a list of character (strlen)
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//similar to (atoi() in stdlib.h)
int ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	if (str[i] >= '1' && str[i] <= '4')
		nbr = nbr * 10 + (str[i] - '0');
	return (nbr);
}

//prints a number in the standart output
void ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
int check_double(int tab[4][4], int pos, int num)
{
	int i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
	return (0);
}

int check_col_up(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (entry[pos % 4] != count)
			return (1);
	}
	return (0);
}

int check_row_right(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max_size;
	int visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				visible_towers++;
			}
		}
		if (entry[12 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int check_col_down(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max;
	int count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int check_row_left(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}
int *get_numbers(char *str)
{
	int i;
	int j;
	int *tab;

	if (!(tab = malloc(4 * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
    {
		if (str[i] >= '1' && str[i] <= '4')
			tab[j++] = ft_atoi(str + i);
        if (!((str[i] >= '1' && str[i] <= '4') || str[i] == ' '))
            return (0);
    }
	return (tab);
}

int solve(int tab[4][4], int entry[16], int pos)
{
	int size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		//checking if the number I want to place is correct
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			//checking if the tab is correct with the new number
			if (check_case(tab, pos, entry) == 0)
			{
				//checking for next possibility
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	//did not find any solutions
	return (0);
}

void display_solution(int tab[4][4])
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int main(int ac, char **av)
{
	int tab[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
	};
	int *entry;

    if (ac != 2 || ft_strlen(av[1]) != 31)
    {
        ft_putstr("Error!\n");
        return (0);
    } 
	entry = get_numbers(av[1]);
    if (entry == 0)
    {
        ft_putstr("Error!\n");
        return (0);
    }


	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Error!\n");
	return (0);
}
