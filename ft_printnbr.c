/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasapog <tkasapog@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:05:28 by tkasapog          #+#    #+#             */
/*   Updated: 2024/05/03 12:08:50 by tkasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int number)
{
	int		length;
	char	digit;

	length = 0;
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
		length++;
	}
	if (number >= 10)
	{
		length += ft_printnbr(number / 10);
	}
	digit = '0' + number % 10;
	write(1, &digit, 1);
	length++;
	return (length);
}
