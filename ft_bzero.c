/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:28:35 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:28:40 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char buffer[] = "helloworld";
	char buffer2[] = "helloworld";
	char buffer3[] = "helloworld";
	char buffer4[] = "helloworld";

	printf("Before ft_bzero: %s\n", buffer);

	ft_bzero(buffer, sizeof(buffer));
	bzero(buffer2, sizeof(buffer2));
	printf("After ft_bzero: %s\n", buffer);
	printf("Original output after bzero: %s\n", buffer2);

	printf("\n");

	ft_bzero(buffer3, 25);
	bzero(buffer4, 25);
	printf("Buffer3 byte by byte: ");
	for (int i = 0; i < 11; i++) {
		printf("%c ", buffer3[i]);
	}
	printf("\n");

	printf("Buffer4 byte by byte: ");
	for (int i = 0; i < 11; i++) {
		printf("%c ", buffer4[i]);
	}
	printf("\n");
}
*/