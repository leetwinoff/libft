/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:58:35 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/11 12:58:41 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_char(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && check_char(s1[start], set))
		start++;
	while (end > start && check_char(s1[end - 1], set))
		end--;
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[i++] = s1[start++];
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char *str = " HeHello WorldHe ";
	char *set = "He";
	char *result = ft_strtrim(str, set);
	printf("Trimmed string is: %6s\n", result);
	free(result);
}
*/
