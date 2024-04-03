/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:06:44 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/28 18:27:46 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaup(unsigned int n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789ABCDEF";
	if (n < 16)
		return (ft_putchar(base[n]));
	if (n >= 16)
	{
		i += ft_hexaup(n / 16);
		i += ft_hexaup(n % 16);
	}
	return (i);
}
