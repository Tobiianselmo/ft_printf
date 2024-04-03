/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexapointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:12:25 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/28 17:34:57 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexalong(unsigned long n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (n < 16)
	{
		return (ft_putchar(base[n]));
	}
	if (n >= 16)
	{
		i += ft_hexalong(n / 16);
		i += ft_hexalong(n % 16);
	}
	return (i);
}

int	ft_hexapointer(unsigned long n)
{
	int	i;

	i = 0;
	if (!n)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		write(1, "0x", 2);
		i += ft_hexalong(n);
		return (i + 2);
	}
}
