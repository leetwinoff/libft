/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:33:46 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:33:48 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	result;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	result = dst_len + src_len;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && (dst_len + 1) < size)
	{
		dst[dst_len++] = src[i++];
	}
	dst[dst_len] = '\0';
	return (result);
}


#include <bsd/string.h>

int main()
{
	// The maximum size that can be copied into dst
	char dst[20] = "Hello, ";
	const char *src = "World!";
	size_t size = sizeof(dst);

	printf("Before ft_strlcat:\n");
	printf("dst: '%s'\n", dst);
	printf("src: '%s'\n", src);

	size_t result = ft_strlcat(dst, src, size);

	printf("\nAfter ft_strlcat:\n");
	printf("dst: '%s'\n", dst);
	printf("Result (expected total length): %lu\n", result);

	//Same test with original function
	char dst1[20] = "Hello, ";
	const char *src1 = "World!";
	size_t size1 = sizeof(dst1);

	size_t result1 = strlcat(dst1, src1, size1);

	printf("\nAfter original strlcat:\n");
	printf("dst: '%s'\n", dst1);
	printf("Result (expected total length): %lu\n", result1);




	// Test with a smaller buffer size
	char small_dst[15] = "Hello, ";
	size_t small_size = sizeof(small_dst);
	char small_dst1[15] = "Hello, ";
	size_t small_size1 = sizeof(small_dst1);

	printf("\nTest with smaller buffer:\n");
	printf("small_dst: '%s'\n", small_dst);
	result = ft_strlcat(small_dst, src, sizeof(small_dst));
	printf("small_dst after strlcat: '%s'\n", small_dst);
	printf("Result (expected total length): %lu\n", result);

	printf("\nTest with smaller buffer with original function:\n");
	printf("small_dst: '%s'\n", small_dst1);
	result = strlcat(small_dst1, src, sizeof(small_dst1));
	printf("small_dst after strlcat: '%s'\n", small_dst1);
	printf("Result (expected total length): %lu\n", result);

	return 0;
}
