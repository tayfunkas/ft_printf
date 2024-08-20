/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasapog <tkasapog@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:09:37 by tkasapog          #+#    #+#             */
/*   Updated: 2024/05/06 12:21:49 by tkasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h> 
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *text, ...);
int		ft_printchar(char c);
int		ft_printhex(uintptr_t nbr);
int		ft_printhexc(uintptr_t nbr);
int		ft_printnbr(int number);
int		ft_printptr(void *ptr);
int		ft_printstr(char *str);
char	printf_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_printunbr(unsigned int number);

#endif 
