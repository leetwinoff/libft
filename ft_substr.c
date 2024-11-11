/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:58:39 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/08 14:58:42 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (!s || start >= ft_strlen(s))
	{
		substring = malloc(1);
		return (substring);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	while (i < len)
	{
		substring[i++] = s[start++];
	}
	substring[i] = '\0';
	return (substring);
}
/*

#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char str[] = "Hello World";
	unsigned int start = 6;
	size_t len = 15;
	char *result;

	result = ft_substr(str, start, len);
	printf("Result substr is: %s\n", result);
	size_t i = 0;
	if (len > ft_strlen(str))
		len = ft_strlen(str) - start;
	while (i < len)
	{
		printf("%c/", result[i]);
		i++;
	}
}

*/