/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:08:50 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 15:08:52 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while(s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);  
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "Hello World";
	char ch = 'o';
	char *result;
	result = ft_strrchr(str, ch);
	printf("'%c' found on position - %ld\n", ch, result - str);
	printf("%s\n", result);
}
*/