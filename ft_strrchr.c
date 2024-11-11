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
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if (s[s_len] == c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (0);
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