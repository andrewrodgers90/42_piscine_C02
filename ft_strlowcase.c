/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:16:47 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/18 18:26:32 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] += 32;
			count++;
		}
		else
		{
			count++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	arr[] = "heLLo";
	char	arr2[] = "HELLO";

	printf("%s\n", arr);
	printf("%s\n", arr2);
	ft_strlowcase(arr);
	ft_strlowcase(arr2);
	printf("%s\n", arr);
	printf("%s\n", arr2);
}
*/
