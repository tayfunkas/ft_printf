/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointervalue.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasapog <tkasapog@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:14:21 by tkasapog          #+#    #+#             */
/*   Updated: 2024/05/03 13:17:00 by tkasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	int			length;
	uintptr_t	ptr_value;

	if (ptr == NULL)
	{
		ft_printstr("(nil)");
		return (5);
	}
	ptr_value = (uintptr_t)ptr;
	ft_printstr("0x");
	length = ft_printhex(ptr_value);
	return (length + 2);
}
