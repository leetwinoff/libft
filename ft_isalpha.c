/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:18:47 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:18:57 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main() {
    // Test ft_isalpha directly inside printf
    printf("%d\n", ft_isalpha('A'));  // Expected: 1
    printf("%d\n", ft_isalpha('z'));  // Expected: 1
    printf("%d\n", ft_isalpha('1'));  // Expected: 0
    printf("%d\n", ft_isalpha('@'));  // Expected: 0
    printf("%d\n", ft_isalpha(' '));  // Expected: 0
    printf("%d\n", ft_isalpha('#'));  // Expected: 0

    return 0;
}*/