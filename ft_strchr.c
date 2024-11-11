/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:32:32 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:32:33 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	int				i;

	ch = (unsigned char)c;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char *str = "Hello World";
	char c = 'W';

	char *result = ft_strchr(str, c);
	if (result)
		printf("Character '%c' was found at position %ld\n", c, result - str);
	else
		printf("Character was not found");

	//Original function returns 

	const char *str2 = "Hello World";
	char c2 = 'W';
	char *result2 = strchr(str2, c2);
	printf("Original function returns\n");
	if (result)
		printf("Character '%c' was found at position %ld", c, result - str);
	else
		printf("Character was not found");
}
*/