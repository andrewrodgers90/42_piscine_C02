/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:46:21 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/16 10:45:03 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
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
	int	i = ft_str_is_lowercase(arr);
	int	j = ft_str_is_lowercase(arr2);
	int	k = ft_str_is_lowercase(arr_empty);
	int	l = ft_str_is_lowercase(arr3);

	printf("Arr returns value of: %d\n", i);
	printf("Arr2 returns value of: %d\n", j);
	printf("Arr3 returns value of: %d\n", l);
	printf("Arr_empty returns value of: %d\n", k);
}
*/
