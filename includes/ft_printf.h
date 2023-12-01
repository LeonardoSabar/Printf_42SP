/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:46:19 by leobarbo          #+#    #+#             */
/*   Updated: 2023/12/01 10:59:45 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_LOWERCASE "0123456789abcdef"
# define HEX_UPPERCASE "0123456789ABCDEF"

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nbr);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *str, int ch);
char	*ft_itoa(int n);
void	*ft_calloc(size_t nmemb, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_utoa(unsigned int n);
int		ft_putnbr_unsg(unsigned int nbr);
int		ft_puthex(unsigned int nbr, char *base);
int		ft_putpointer(unsigned long *nbr, char *base);

#endif
