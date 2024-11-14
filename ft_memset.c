/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:32:19 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:32:20 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	byte = (unsigned char)c;
	while (i < n)
	{
		ptr[i++] = byte;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	char buffer[10];
	if (ft_memset(buffer, 0, sizeof(buffer)))
	{
		printf("Buffer was successfully set to zero.\n");
	}
	int i = 0;
	while (i < 10)
	{
		printf("%d/", buffer[i++]);
	}
}
*/