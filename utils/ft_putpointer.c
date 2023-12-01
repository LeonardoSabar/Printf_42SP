/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:58:34 by leobarbo          #+#    #+#             */
/*   Updated: 2023/12/01 15:59:56 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/ft_printf.h"

static int	count_hex(unsigned int n)
{
	int	idx;

	idx = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		idx++;
	}
	return (idx);
}

static char	*hex_to_str(unsigned long nbr, char *base)
{
	int		size;
	char	*hex;

	if (!nbr)
		return (NULL);
	size = count_hex(nbr);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[nbr % 16];
		nbr = nbr / 16;
		size--;
	}
	return (hex);
}

int	ft_putpointer(void *nbr, char *base)
{
	int				len;
	char			*str;
	unsigned long	n;

	n = (unsigned long)nbr;
	str = hex_to_str(n, base);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len);
}
