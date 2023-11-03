/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:52:42 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/03 13:43:57 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list argums, char format)
{
	int	sizeformats;

	sizeformats = 0;
	if (format == 'c')
		sizeformats += ft_printf_caract(va_arg(argums, int));
	else if (format == 's')
		sizeformats += ft_printf_char(va_arg(argums, char *));
	else if (format == 'p')
		sizeformats += ft_printf_ptr(va_arg(argums, unsigned long long));
	else if (format == 'd')
		sizeformats += ft_printf_int(va_arg(argums, int));
	else if (format == 'i')
		sizeformats += ft_printf_int(va_arg(argums, int));
	else if (format == 'u')
		sizeformats += ft_printf_unsign(va_arg(argums, unsigned int));
	else if (format == 'x' || format == 'X')
		sizeformats += ft_printf_hex(va_arg(argums, unsigned int), format);
	else if (format == '%')
		sizeformats += ft_printf_percent();
	return (sizeformats);
}

int	ft_printf(char const *str, ...)
{
	va_list	argums;
	int		i;
	int		size;
	int		temp;

	size = 0;
	i = 0;
	va_start (argums, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			temp = ft_formats(argums, str[++i]);
			if (temp == -1)
				return (-1);
			size = size + temp;
		}
		else
			size += ft_printf_caract(str[i]);
		i++;
	}
	va_end (argums);
	return (size);
}
/*int main(void)
{
	ft_printf("Ejemplo de texto simple\n");
    ft_printf("Imprimiendo un caracter: %c\n", 'A');
    ft_printf("Imprimiendo una cadena: %s\n", "Hola, mundo!");
    ft_printf("Imprimiendo un número entero: %d\n", 123);
    ft_printf("Imprimiendo un número hexadecimal: %x\n", 255);
    ft_printf("Imprimiendo un puntero: %p\n", (void *)0x7ffeec8c04f8);
    ft_printf("Porcentaje: %%\n");

    return 0;
}*/