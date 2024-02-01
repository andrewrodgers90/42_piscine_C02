/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:07:13 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/24 15:18:26 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	i;

	i = 0;
	src_length = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}
/*
int	main(void)
{
	char src[] = "";
	char dest[20];
	int i;
	int j;

	i = ft_strlcpy(dest, src, 0);
	j = strlcpy(dest, src, 0);
	printf("ft_strlcpy: %d\nstrlcpy: %d", i, j);
	return (0);
}
*/
