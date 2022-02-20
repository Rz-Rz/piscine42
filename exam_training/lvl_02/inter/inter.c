/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:17:15 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/18 14:07:26 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char s)
{
    write(1, &s, 1);
}

void ft_inter(char *s1, char*s2)
{
    int tab[256] = {0};
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        j = 0 + i;
        while (s2[j])
        {
           if (s1[i] == s2[j] && tab[(int)s1[i]] == 0) 
           {
               ft_putchar(s1[i]);
               tab[(int)s1[i]] = 1;
           }
           j++;
        }
        i++;
    }
}



int main(int ac, char **av)
{
    if (ac != 3)
    {
        ft_putchar('\n');
        return (0);
    }
    ft_inter(av[1], av[2]);
    ft_putchar('\n');
    return (0);
}

