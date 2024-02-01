/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:29:41 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/16 10:41:54 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
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
	char	arr[] = "H3ll0";
	char	arr2[] = "12345";
	char	arr_empty[] = "";
	int	i = ft_str_is_numeric(arr);
	int	j = ft_str_is_numeric(arr2);
	int	k = ft_str_is_numeric(arr_empty);

	printf("Arr returns value of: %d\n", i);
	printf("Arr2 returns value of: %d\n", j);
	printf("Arr_empty returns value of: %d\n", k);

	return (0);
}
*/
