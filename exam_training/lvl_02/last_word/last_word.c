/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:44:30 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/18 14:43:08 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *c, int sl, int el)
{
    while (sl < el && c[sl] != '\0')
        ft_putchar(c[sl++]);
}

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int is_space(char s)
{
    if(s == ' ' || s == '\t')
        return (1);
    return (0);
}

void ft_lastword(char *s)
{
    int start_len;
    int end_len;

    start_len = ft_strlen(s);
    while (is_space(s[start_len - 1]) == 1)
        start_len--;
    while (is_space(s[start_len - 1]) == 0 )
    {
        if (start_len == 0)
        {
            start_len = 0;
            break;
        }
        else
            start_len--;
    }
    end_len = start_len;
    while (is_space(s[end_len]) == 0 && s[end_len] != '\0') 
        end_len++;
    ft_putstr(s, start_len, end_len);
}


int main(int ac, char **av)
{
    if (ac != 2)
    {
        ft_putchar('\n');
        return (0);
    }

    ft_lastword(av[1]);
    ft_lastword("kygn  kuyn kf \tkuy");
}
