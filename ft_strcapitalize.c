/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:03:27 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/24 14:57:02 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strlower(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlower(str);
	while (str[i] != '\0')
	{
		if ((ft_is_alphanum(str[i - 1]) == 0) && (ft_is_lowercase(str[i]) == 1))
		{
			str[i] -= 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	return (str);
}
/*
int	main(void)
{
	char	arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Before: %s\n", arr);
	ft_strcapitalize(arr);
	printf("After: %s\n", arr);
	return (0);
}
*/
