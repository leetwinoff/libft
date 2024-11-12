/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:31:29 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:31:32 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char buffer[] = "Hellow World";
	char ch = 'e';
	char *result;

	result = ft_memchr(buffer, ch, sizeof(buffer));
	if (result)
		printf("Found %c in position %ld\n", ch, result - buffer);
	else
		printf("'%c' not found", ch);
}
*/