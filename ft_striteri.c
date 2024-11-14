/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:41:02 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/11 11:41:04 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void f(unsigned int index, char *ch)
{
	*ch = *ch + index;
}

#include <stdio.h>
int main()
{
	char str[] = "abc";
	ft_striteri(str, f);
	printf("Result string is - %s\n", str);
}
*/
