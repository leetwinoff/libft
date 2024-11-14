/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:15:23 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/11 11:15:25 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*result;

	i = 0;
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char f(unsigned int a, char b)
{
	return (a + b);
}

#include <stdio.h>
int main()
{
	char *str = "abc";
	char *result = ft_strmapi(str, f);
	printf("Result string is - %s\n", result);
}
*/