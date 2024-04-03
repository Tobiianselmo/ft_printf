/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:21:40 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/28 17:41:03 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	count_numbers(unsigned int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = count_numbers(n);
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (count);
}
