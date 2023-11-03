/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:32:59 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/02 18:00:47 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_ptr(unsigned long long num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printf_ptr(unsigned long long ptr)
{
	int	print_size;

	print_size = 0;
	print_size += write(1, "0x", 2);
	if (ptr == 0)
		print_size += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		print_size += ft_size_ptr(ptr);
	}
	return (print_size);
}
/*int main() {
    unsigned long long address = 0xDEADBEEF; 

    printf("Imprimiendo dirección de memoria: 0x%llx\n", address);

    int printed = ft_printf_ptr(address);
    printf("\nTotal de caracteres impresos: %d\n", printed);

    return 0;
}*/
