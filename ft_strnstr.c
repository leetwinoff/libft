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
	size_t	i;
	size_t	j;

    if (!little || !little[0])
        return ((char *)big);
	i = 0;
    while (big[i] && i < len)
	{
        j = 0;
        while (big[i + j] && little[j]
            && i + j < len && big[i + j] == little[j])
            j++;
            if (!little[j])
                return ((char *)(big + i));
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