/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedputnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasapog <tkasapog@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:13:31 by tkasapog          #+#    #+#             */
/*   Updated: 2024/05/03 12:26:39 by tkasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(unsigned int number)
{
	int	length;

	length = 0;
	if (number == 0)
	{
		ft_printchar('0');
		return (1);
	}
	if (number >= 10)
	{
		ft_printunbr(number / 10);
	}
	ft_printchar('0' + number % 10);
	while (number != 0)
	{
		length++;
		number = (number / 10);
	}
	return (length);
}
