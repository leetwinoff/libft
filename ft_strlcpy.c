/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:33:58 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:33:59 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	copy;

	copy = 0;
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (copy < size - 1 && src[copy] != '\0')
		{
			dst[copy] = src[copy];
			copy++;
		}
		dst[copy] = '\0';
	}
	return (src_len);
}
/*
#include <bsd/string.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	unsigned int	result;
	unsigned int	result1;
	unsigned int	size = 1;
	char	*src = "Hello World";
	char	*dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	char	*src1 = "Hello World";
	char	*dest1 = malloc(sizeof(char) * (ft_strlen(src) + 1));

	if (!dest || !dest1)
	{
		printf("Allocation failed");
		return 1;
	}

	result = ft_strlcpy(dest, src, size);
	result1 = strlcpy(dest1, src1, size);
	printf("Result = %d\n", result);
	printf("Destination = %s\n", dest);
	printf("Result1 = %d\n", result1);
	printf("Destination1 = %s\n", dest1);

	free(dest);
	free(dest1);

	return (0);
}
*/