/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:18:02 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/11 10:18:04 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*result;

	sign = 1;
	len = count_length(n); 
	result = malloc(sizeof(char) * (len + 1));
    if (!result)
        return (0);
	result[len--] = '\0';
	if (n < 0)
	{
		sign = -sign;
		result[0] = '-';
	}
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (n != 0)
	{
		result[len--] = sign * (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
// 	int num = 0;
// 	char *numstr = ft_itoa(num);
// 	printf("Result string %s\n", numstr);
// }
