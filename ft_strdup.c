/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:33:32 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:33:33 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicated;
	size_t		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(s);
	duplicated = malloc(sizeof(char) * (src_len + 1));
	if (!duplicated)
		return (0);
	while (s[i])
	{
		duplicated[i] = s[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "Hello World";
	char *duplicated_str;
	char *duplicated_original;

	duplicated_str = ft_strdup(str);
	printf("Duplicated string with ft_strdup %s\n", duplicated_str);
	free(duplicated_str);
	duplicated_original = strdup(str);
	printf("Duplicated with strdup: %s\n", duplicated_original);
	free(duplicated_original);
}