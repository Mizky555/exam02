#include <stdio.h>
#include <unistd.h>

void	print_union(char *str)
{
	int	index = 0;
	int	i;

	while (str[index])
	{
		i = 0;
		while (i < index)
		{
			if (str[index] == str[i])
				break;
			i++;
		}
		if (index == i)
		{
			write (1, &str[index], 1);
			break;
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][i] == argv[1][j])
				{
					print_union(argv[1]);
					break;
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}








// #include <stdarg.h>

// int	ft_pc(char c)
// {
// 	return (write(1, &c, 1));
// }

// int	slen(char *s)
// {
// 	int	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// int	ft_putstr(char *s)
// {
// 	int	len = 0;
// 	if (!s)
// 		return (write(1, "(null)", 6));
// 	len = slen(s);
// 	return (write(1, s, len));
// }

// int	ft_nbr(int n)
// {
// 	int	len = 0;
// 	if (n < 0)
// 	{
// 		len += ft_pc('-');
// 		len += ft_nbr((n / 10) * -1);
// 		n = (n % 10) * -1;
// 	}
// 	else if (n >= 10)
// 		len += ft_nbr(n / 10);
// 	len += write(1, &"0123456789"[n % 10], 1);
// 	return (len);
// }

// int	hex(unsigned int n)
// {
// 	int	len = 0;
// 	if (n >= 16)
// 		len += hex(n / 16);
// 	len += write(1, &"013456789abcdef"[n % 16], 1);
// 	return (len);
// }

// int	fm(va_list ag, char c)
// {
// 	int	len = 0;
// 	if (c == 's')
// 		len += ft_putstr(va_arg(ag, char *));
// 	else if (c == 'd')
// 		len += ft_nbr(va_arg(ag, int));
// 	else if (c == 'x')
// 		len += hex(va_arg(ag, unsigned int));
// 	return (len);
// }

// int	ft_printf(char *s, ...)
// {
// 	int	len = 0;
// 	int	i = 0;
// 	va_list	args;
// 	va_start(arg, s);
// 	while (s[i])
// 	{
// 		if (s[i] == '%')
// 		{
// 			i += 1;
// 			len += fm(arg, s[i]);
// 		}
// 		else
// 			len += ft_pc(s[i]);
// 		i++;
// 	}
// 	return (len);
// }
