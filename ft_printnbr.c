/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbolat <bbolat@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:54:19 by bbolat            #+#    #+#             */
/*   Updated: 2022/08/02 12:54:20 by bbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nbr)
{
	long long int	n;
	int				len;

	n = nbr;
	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += ft_putchar('-');
	}
	if (!(n >= 0 && n <= 9))
	{
		len += ft_putnbr(n / 10);
	}
		len += ft_putchar((n % 10) + 48);
	return (len);
}

int	ft_printnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	len += ft_putnbr(nbr);
	return (len);
}

int	ft_print_unsigned(unsigned int unbr)
{
	int	len;

	len = 0;
	if (unbr == 0)
		return (write(1, "0", 1));
	len += ft_putnbr(unbr);
	return (len);
}
