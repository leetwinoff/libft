/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:28:53 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:28:55 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
#include <stdio.h>
int	main(){
	int *arr = ft_calloc(10, sizeof(int));
	int i = 0;

	if (arr == NULL)
		printf("Memory allocation failed or zero bytes requested.\n");
	else
	{
		while (i < 10)
		{
			printf("%d", arr[i]);
			i++;
		}
	}
	free(arr);
}
*/