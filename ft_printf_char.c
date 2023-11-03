/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:16:01 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/02 18:04:33 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(char *str)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		temp = write(1, &str[i], 1);
		if (temp == -1)
			return (-1);
		i++;
	}
	return (i);
}
/*int main(void)
{
	char *str = NULL;
	//printf("%d", ft_printf_char(str));
	ft_printf_char(str);
}*/
