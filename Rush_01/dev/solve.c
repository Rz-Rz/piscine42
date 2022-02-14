/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:58:22 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/13 20:30:31 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
        ft_putchar(c[i++]);
}

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


int check_same(int tab[4][4], int pos, int num)
{
    int i;

    i = -1;
    while (++i < pos / 4) // while i is less than the row 
        if (tab[i][pos % 4] == num) 
            return (1);

    i = -1;
    while (++i < pos % 4) // while i is less than the col
        if (tab[pos / 4][i] == num)
            return(1);
    return 0;
}

int check_colup(int tab[4][4], int pos, int entry[16])
{
    int i;
    int max;
    int count;

    i = 0;
    max = 0;
    count = 0;
    if (pos / 4 == 3) // takes only the last row 12, 13, 14, 15
    {
        while (i < 4)
        {
            if (tab[i][pos % 4] > max) //goes to bottom from up, for 12, 13, 14, 15(last row). If its greater than max we see another building, count gives us the number of buildings we sees. 
            {
                max = tab[i][pos % 4]; //.
                count++;
            }
            i++;
        }
        if (entry[pos % 4] != count)
            return (1);
    }
    return (0);
}

int check_coldown(int tab[4][4], int pos, int entry[16])
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
            if (tab[i][pos % 4] > max) //goes up from bottom, for 12, 13, 14, 15. if its greater than max we see another building 
            {
                max = tab[pos / 4][i];
                count++;
            }
            i--;
        }
        if (entry[4 + pos % 4] != count)
            return (1);
    }
    
    return (0);
}

int check_rowleft(int tab[4][4], int pos, int entry[16])
{
    int i;
    int max;
    int count;

    i = 0;
    max = 0;
    count = 0;
    if (pos % 4 == 3) // leftmost col 3, 7, 11, 15, check if we filled all of our colums, we dont want to chec an unfinished columns
    {
        while (i < 4)
        {
            if (tab[pos / 4][i] > max) // we get a row from left to right
            {
                max = tab[pos / 4][i];
                count++;
            }
            i++;
        }
        if (entry[8 + pos / 4] != count) // we check if the count is equal to the clue, third series of 4 input
            return (1);
    }
    return (0);
}

int check_rowright(int tab[4][4], int pos, int entry[16])
{
    int i;
    int max;
    int count;

    i = 3;
    max = 0;
    count = 0;
    if (pos % 4 == 3) // leftmost col 3, 7, 11, 15, check if we filled all of our colums, we dont want to chec an unfinished columns
    {
        while (i >= 0)
        {
            if (tab[pos / 4][i] > max) // we get a row from left to right
            {
                max = tab[pos / 4][i];
                count++;
            }
            i--;
        }
        if (entry[12 + pos / 4] != count) // we check if the count is equal to the clue, third series of 4 input
            return (1);
    }
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
        while(++j < 4)
        {
            ft_putnbr(tab[i][j]);
            ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

int check_indice(int tab[4][4], int pos, int entry[16])
{
    if (check_rowleft(tab, pos, entry) == 1)
        return (1);
    if (check_rowright(tab, pos, entry) == 1)
        return (1);
    if (check_coldown(tab, pos, entry) == 1)
        return (1);
    if (check_colup(tab, pos, entry) == 1)
        return (1);
    return (0);
}

int ft_atoi(char *str)
{
    int nbr;
    int i;
    int minus;

    nbr = 0;
    i = 0;
    minus = 0;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            minus++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }
    if (minus % 2 == 1)
        return (nbr * -1);
    return (nbr);
}

int ft_strlen(char *t)
{
    int i;

    i = 0;
    while (t[i] != '\0')
        i++;
    return (i);
}

int *get_nb(char *str)
{
    int i;
    int j;
    int tab[16];
    
    i = -1;
    j = 0;
    while(str[++i] != '\0')
        if (str[i] >= '0' && str[i] <= '9')
            tab[j++] = ft_atoi(str + i);
    return tab;
}


int solve(int tab[4][4], int entry[16], int pos)
{
    int size;

    if (pos == 16)
        return (1);

    size = 0;
    while (++size <= 4)
    {
        if (check_same(tab, pos, size) == 0)
        {
            tab[pos / 4][pos % 4] = size;

            if (check_indice(tab, pos, entry) == 0)
            {
                if (solve(tab, entry, pos + 1) == 1)
                    return (1);
            }
            else   
                tab[pos / 4][pos % 4] = 0;


        }

    }
    return (0);

}

int main(int argc, char *argv[])
{

    int tab[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
	};

    if (argc != 2)
        return (0);

    int *entry;  
    entry = get_nb(argv[1]);

    if(solve(tab, entry, 0) == 1)
        display_solution(tab);
    else
        ft_putstr("Did not find any solution");
    return (0);
}
