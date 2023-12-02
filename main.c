/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:14:39 by leobarbo          #+#    #+#             */
/*   Updated: 2023/12/02 16:44:17 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bonus/includes_bonus/ft_printf_bonus.h"
#include <stdio.h>

int	main(void)
{
	int		num1 = 42;
	int		num2 = 99;
	int 	num3 = 0;
	char	*char1 = "under the mat";
	int		ret;


	ret = ft_printf("Teste ft_printf1: %#X\n", num1);
	ft_printf("return %d\n", ret);
	ret = printf("Teste printf1: %#X\n", num1);
	ft_printf("return %d\n", ret);
	// ft_printf("Teste ft_printf1: %p %p\n", &num1, &num2);
	// printf("Teste printf1: %p %p\n", &num1, &num2);
	// ft_printf("Teste ft_printf2: %p\n", &num3);
	// printf("Teste printf2: %p\n", &num3);
	// ft_printf("Teste ft_printf3: %p %p\n", &num3, &num3);
	// printf("Teste printf3: %p %p\n", 0, 0);
	// ft_printf("Teste ft_printf4: %p %p\n", 0, 0);
	// printf("Teste printf4: %p %p\n", 0, 0);
	// printf("Teste printf: %s\n", char1);
	// ft_printf("Teste ft_printf: %s\n", char1);
	// printf("Teste printf: %s\n", NULL);
	// ft_printf("Teste ft_printf: %s\n", NULL);
	return (0);
}
