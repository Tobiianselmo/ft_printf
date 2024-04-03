/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:39:37 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/28 18:28:06 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *content, ...);
int		ft_putchar(int n);
int		ft_putstr(char *n);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_hexa(unsigned int n);
int		ft_hexaup(unsigned int n);
int		ft_hexapointer(unsigned long n);

#endif
