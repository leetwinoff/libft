/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:21:35 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/11 10:21:37 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*copy_words(const char *start, unsigned int length)
{
	unsigned int		i;
	char	*word;

	i = 0;
	word = malloc((length + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start[i] != '\0' && i < length)
	{
		word[i] = start[i];
		i++;
	}
	word[length] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	const char	*start;
	char		**result;

	i = 0;
	j = 0;
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			start = s + i;
			while (s[i] != c && s[i] != '\0')
				i++;
			result[j++] = copy_words(start, s + i - start);
		}
	}
	result[j] = NULL;
	return (result);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char *str = "hello,world,i,love,you";
	char c = ',';
	int i = 0;

	char **result = ft_split(str, c);
	while (i < 5)
	{
		printf("Splited word - %s\n", result[i]);
		free(result[i]);
		i++;	
	}
	free(result);
	return (0);
}
*/