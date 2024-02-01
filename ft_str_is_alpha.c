/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:00:49 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/16 10:25:50 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
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
	char	arr[] = "Hello";
	char	arr2[] = "H3ll0";
	char	arr_empty[] = "";
	int	i = ft_str_is_alpha(arr);
	int	j = ft_str_is_alpha(arr2);
	int	k = ft_str_is_alpha(arr_empty);

	printf("Arr returns value of: %d\n", i);
	printf("Arr2 returns value of: %d\n", j);
	printf("Arr_empty returns value of: %d\n", k);
}
*/