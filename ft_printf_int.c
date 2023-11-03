/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:52:03 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/02 17:58:06 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		sn;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	sn = size(n);
	str = malloc(sizeof(char) * (sn + 1));
	if (!str)
		return (0);
	str[sn] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	sn--;
	while (n > 0)
	{
		str[sn] = ((n % 10) + 48);
		n /= 10;
		sn--;
	}
	return (str);
}

int	ft_printf_int(int n)
{
	int		size;
	char	*str;

	size = 0;
	str = ft_itoa(n);
	size = ft_printf_char(str);
	free (str);
	return (size);
}

/*int main(void)
{
    int num = -2147483648;
    ft_printf_int(num);
}*/