/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:19:19 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/28 18:36:57 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(char const *input, va_list element)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_putchar(va_arg(element, int));
	else if (*input == 's')
		i += ft_putstr(va_arg(element, char *));
	else if (*input == 'p')
		i += ft_hexapointer((unsigned long)va_arg(element, void *));
	else if (*input == 'd' || *input == 'i')
		i += ft_putnbr(va_arg(element, int));
	else if (*input == 'u')
		i += ft_putnbr_u(va_arg(element, unsigned int));
	else if (*input == 'x')
		i += ft_hexa(va_arg(element, int));
	else if (*input == 'X')
		i += ft_hexaup(va_arg(element, int));
	else if (*input == '%')
		i += write(1, "%%", 1);
	return (i);
}

int	ft_printf(char const *input, ...)
{
	int		size;
	va_list	element;

	size = 0;
	va_start(element, input);
	if (write(1, "", 0) == -1)
		return (-1);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			size += ft_conversion(input, element);
		}
		else
			size += write(1, input, 1);
		input++;
	}
	va_end(element);
	return (size);
}

/*  int	main()
{
	char *str;

	str = "hola";
	printf("%zd\n", write(1,"hola\n",5));
	ft_printf("%s", str);
}  */