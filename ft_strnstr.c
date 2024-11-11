/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:34:45 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:34:46 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	i = 0;
	little_len = ft_strlen(little);
	if (little[i] == '\0')
		return ((char *)big);
	while (i + little_len <= len && big[i] != '\0')
	{
		j = 0;
		while (j < little_len && big[i + j] == little[j])
			j++;
		if (j == little_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main()
{
	char *big = "42 School Schools Berlin";
	char *little = "Schools";
	char *result;
	size_t len = 16;
	result = ft_strnstr(big, little, len);
	printf("Result is: %s\n", result);
	//Original function
	result = strnstr(big, little, len);
	printf("Origial function result: %s\n", result);
}
*/