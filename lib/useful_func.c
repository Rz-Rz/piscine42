int ft_strlen(char* c);

int ft_strlen(char* str)
{
        int     i;

        i = 0;
        while (str[i] != '\0' )
                i++;
        return(i);

}

int ft_strlen(char *str) {
	int i = 0;
	while (*(str+i))
		++i;

	return i;
}

int     ft_int_length(int n);

int     ft_int_length(int n)
{
        int i;

        i = 0;
        while(n != 0)
        {
                n = n / 10;
                i++;
        }
        return(i);
}

void tostring(char str[], int num)
{
    int i, rem, len = 0, n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}
void    tostring(char str[], int num, int len)
{
	int     i; 
	int     rem; 
	int     n;

	n = num;
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
}

int toint(char str[])
{
    int len = strlen(str);
    int i, num = 0;

    for (i = 0; i < len; i++)
    {
        num = num + ((str[len - (i + 1)] - '0') * pow(10, i));
    }

   return num;
}

long int x_to_the_n (int x,int n)
{
	int i; /* Variable used in loop counter */
	int number = 1;

	for (i = 0; i < n; ++i)
		number *= x;

	return(number);
}

int     ft_pow10(int n)
{
	int res = 1;
	for(int i = 0; i < n; i++)
	{
		res *= 10;
	}
	return res;
}

#include <unistd.h>

void	ft_putstr(char *str) {
	int i = 0;

	while(str[i] != '\0')
		write(1, &str[i++], 1);

}

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		to_lower_by_student(int c) {
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 'a';
}


