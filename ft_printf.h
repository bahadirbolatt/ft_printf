/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbolat <bbolat@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:55:36 by bbolat            #+#    #+#             */
/*   Updated: 2022/08/02 12:55:39 by bbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_printstr(char *str);
int		ft_len_hex(unsigned int nbr);
void	ft_put_hex(unsigned int hex, const char format);
int		ft_print_hex(unsigned int hex, const char format);
void	ft_put_ptr(unsigned long long p);
int		ft_ptrlen(unsigned long long p);
int		ft_print_ptr(unsigned long long p);
int		ft_putnbr(long int nbr);
int		ft_printnbr(int nbr);
int		ft_print_unsigned(unsigned int unbr);
#endif
