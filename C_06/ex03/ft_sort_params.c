/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:49:27 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/11 14:50:56 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strswap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int ft_strcmp(char *s1, char *s2)
{
    (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (s1 - s2);
}

void ft_revparams(char *a, int size)
{
    int i;
    int j;

    i = 1;
    j = 1;
    while (i < size)
    {
        j = 1 + i;
        while (j < size)
        {
            if (ft_strcmp(a[i], a[j]) > 0)
                ft_swap(a[i], a[j]);
            j++;
        }
        i++;
    }
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] = '\n')
    {
        write(1, str[i], 1);
    }
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (++i < argc)
    {
        ft_revparams(*argv[++j], argc);
    }

    ft_putstr(**argv)

}
