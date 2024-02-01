/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:41:01 by arodgers          #+#    #+#             */
/*   Updated: 2023/08/02 17:47:49 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_convert_to_hex(char c)
{
	int		a;
	int		b;
	char	*hex;

	hex = "0123456789abcdef";
	a = (c / 16);
	b = (c % 16);
	ft_putchar('\\');
	ft_putchar(hex[a]);
	ft_putchar(hex[b]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_printable(str[i])
			ft_putchar(str[i]);
		else
			ft_convert_to_hex(str[i]);
		i++;
	}
}
