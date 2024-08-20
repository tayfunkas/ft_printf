/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasapog <tkasapog@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:01:40 by tkasapog          #+#    #+#             */
/*   Updated: 2024/05/03 12:09:16 by tkasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	length;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	length = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		length++;
	}
	return (length);
}
