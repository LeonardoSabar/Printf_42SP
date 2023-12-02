/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:46:19 by leobarbo          #+#    #+#             */
/*   Updated: 2023/12/02 14:30:22 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../includes/ft_printf.h"

# define UPPER_HEX "0123456789ABCDEF"
# define LOWER_HEX "0123456789abcdef"
# define NULL_POINTER "(nil)"

typedef unsigned int	t_unsgi;
typedef unsigned long	t_unsgl;

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nbr);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *str, int ch);
char	*ft_itoa(int n);
void	*ft_calloc(size_t nmemb, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_utoa(t_unsgi n);
int		ft_putnbr_unsg(t_unsgi nbr);
int		ft_puthex(t_unsgi nbr, char *base);
int		ft_putpointer(void *nbr, char *base);

#endif
