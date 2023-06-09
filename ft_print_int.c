/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:40:22 by aboiarin          #+#    #+#             */
/*   Updated: 2023/06/08 15:32:37 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_int_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr_local(long n, char *nbstr, int *i)
{
	if (n > 9)
	{
		ft_putnbr_local(n / 10, nbstr, i);
		ft_putnbr_local(n % 10, nbstr, i);
	}
	else
		nbstr[(*i)++] = n + '0';
}

static char	*ft_itoa(long n)
{
	char	*nbstr;
	int		len;
	int		i;

	len = ft_int_len(n);
	nbstr = ft_calloc((ft_int_len(n) + 1), sizeof(char));
	if (!nbstr)
		return (0);
	i = 0;
	if (n < 0)
	{
		nbstr[i++] = '-';
		n *= -1;
	}
	ft_putnbr_local(n, nbstr, &i);
	return (nbstr);
}

int	ft_print_int(long n)
{
	char	*nbstr;
	int		count;

	count = 0;
	nbstr = ft_itoa(n);
	if (!nbstr)
		return (0);
	count += ft_print_str(nbstr);
	free(nbstr);
	return (count);
}
