/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:57:39 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/16 10:53:11 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	arr[] = "hello";
	char	arr2[] = "Hello";
	char	arr3[] = "12345";
	char	arr_empty[] = "";
	int	i = ft_str_is_printable(arr);
	int	j = ft_str_is_printable(arr2);
	int	k = ft_str_is_printable(arr_empty);
	int	l = ft_str_is_printable(arr3);

	printf("Arr returns value of: %d\n", i);
	printf("Arr2 returns value of: %d\n", j);
	printf("Arr3 returns value of: %d\n", l);
	printf("Arr_empty returns value of: %d\n", k);
}
*/
