/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasapog <tkasapog@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:43:25 by tkasapog          #+#    #+#             */
/*   Updated: 2024/05/03 12:57:04 by tkasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(uintptr_t nbr)
{
	int	leftover;	
	int	length;

	length = 0;
	if (nbr < 16)
	{
		if (nbr < 10)
			ft_printchar('0' + nbr);
		else
			ft_printchar('a' + (nbr - 10));
		length++;
	}
	else
	{
		length = (ft_printhex(nbr / 16) + 1);
		leftover = nbr % 16;
		if (leftover < 10)
			ft_printchar('0' + leftover);
		else
			ft_printchar('a' + (leftover - 10));
	}
	return (length);
}

int	ft_printhexc(uintptr_t nbr)
{
	int	leftover;
	int	length;

	length = 0;
	if (nbr < 16)
	{
		if (nbr < 10)
			ft_printchar('0' + nbr);
		else
			ft_printchar('A' + (nbr - 10));
		length++;
	}
	else
	{
		length = (ft_printhexc(nbr / 16) + 1);
		leftover = nbr % 16;
		if (leftover < 10)
			ft_printchar('0' + leftover);
		else
			ft_printchar('A' + (leftover - 10));
	}
	return (length);
}
