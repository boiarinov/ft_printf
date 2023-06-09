/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:01:38 by aboiarin          #+#    #+#             */
/*   Updated: 2023/06/08 15:15:37 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	*ft_calloc(size_t count, size_t size);

int		ft_printf(const char *format, ...);

int		ft_print_char(char c);
int		ft_print_c(char c);
int		ft_print_str(char *str);
int		ft_print_int(long n);
int		ft_print_uint(unsigned int n);
int		ft_print_hex(unsigned int x, char xcase);
int		ft_print_ptr(void *ptr);

#endif
