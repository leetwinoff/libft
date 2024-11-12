/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:31:41 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:31:44 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptr1;
	const char	*ptr2;

	if (!s1 || !s2)
		return (NULL);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	return (ft_strncmp(ptr1, ptr2, n));
}
/*
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char str1[] = "Hello, World!";
    char str2[] = "Hello, world!";
	char str3[] = "Hello, World!";
    char str4[] = "Hella, world!";
	char str5[] = "Hello, World!";
    char str6[] = "Hello, world!";
	char str7[] = "Hello, World!";
    char str8[] = "Hella, world!";
    
    int result = ft_memcmp(str1, str2, 5);
    int result2 = ft_memcmp(str3, str4, 5);
    int result3 = memcmp(str5, str6, 5);
    int result4 = memcmp(str7, str8, 5);

    if (result == 0) {
        printf("The first 5 bytes are the same.\n");
    } else {
        printf("The first 5 bytes differ: %d\n", result);
    }
	if (result2 == 0) {
        printf("The first 5 bytes are the same.\n");
    } else {
        printf("The first 5 bytes differ: %d\n", result2);
    }
	if (result3 == 0) {
        printf("Original Function - The first 5 bytes are the same.\n");
    } else {
        printf("Original Function - The first 5 bytes differ: %d\n", result3);
    }
	if (result4 == 0) {
        printf("Original Function - The first 5 bytes are the same.\n");
    } else {
        printf("Original Function - The first 5 bytes differ: %d\n", result4);
    }

    return 0;
}
*/
