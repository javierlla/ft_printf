/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:47:28 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/03 11:45:11 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sizeint(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoua(unsigned int num)
{
	int		size;
	char	*str;

	if (num == 0)
		return (ft_strdup("0"));
	size = ft_sizeint(num);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	while (num != 0)
	{
		size--;
		str[size] = num % 10 + 48;
		num /= 10;
	}
	return (str);
}

int	ft_printf_unsign(unsigned int num)
{
	char	*str;
	int		i;

	str = ft_itoua(num);
	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	free (str);
	return (i);
}

/*int	main(void)
{
   //printf("%d", ft_sizeint(8000));
	//printf("%s", ft_itoua(0));
	printf("%d %u",ft_printf_unsign(0), ft_printf_unsign(0));
}*/