/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:33:59 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/02 17:56:45 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*str1;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s1);
	str1 = malloc(sizeof (char) * (size + 1));
	if (!str1)
		return (0);
	while (s1[i] != '\0')
	{
		str1[i] = s1[i];
		i++;
	}
	str1[i] = s1[i];
	return (str1);
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
