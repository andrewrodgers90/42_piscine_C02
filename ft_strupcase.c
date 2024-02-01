/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:00:10 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/24 19:31:45 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a') && (str[count] <= 'z'))
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	arr[] = "helloHELLO8934HELLOhello7534@#$#asd$^%$#";

	printf("%s\n", arr);
	ft_strupcase(arr);
	printf("%s\n", arr);
	return (0);
}*/
