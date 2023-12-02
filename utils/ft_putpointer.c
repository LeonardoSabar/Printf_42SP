/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:58:34 by leobarbo          #+#    #+#             */
/*   Updated: 2023/12/01 19:13:38 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/ft_printf.h"

static int	count_hex(unsigned long nbr)
{
	int	idx;

	idx = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 16;
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

	if (nbr == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	n = (unsigned long)nbr;
	str = hex_to_str(n, base);
	if (!str)
		return (-1);
	len = ft_putstr("0x") + ft_putstr(str);
	free(str);
	return (len);
}
