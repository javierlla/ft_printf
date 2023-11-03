/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_caract.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:06:12 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/02 18:04:57 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_caract(int c)
{
	write (1, &c, 1);
	return (1);
}
/*int main(void)
{
    char c = 'h';
    ft_printf_caract(c);
}*/