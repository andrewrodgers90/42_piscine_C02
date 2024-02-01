/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:36:09 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/16 10:14:23 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && n != 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n != 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	int	n = 15;
	char	source[] = "Hello there";
	char	destination[15];
	ft_strncpy(destination, source, n);
	printf("Destination: %s\n", destination);
	return (0);
}
*/
