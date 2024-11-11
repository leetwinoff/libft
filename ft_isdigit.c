/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:29:53 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:29:54 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}
/*
int main() {
    // Test ft_isdigit directly inside printf
    printf("%d\n", ft_isdigit('0'));  // Expected: 1
    printf("%d\n", ft_isdigit('9'));  // Expected: 1
    printf("%d\n", ft_isdigit('5'));  // Expected: 1
    printf("%d\n", ft_isdigit('A'));  // Expected: 0
    printf("%d\n", ft_isdigit('z'));  // Expected: 0
    printf("%d\n", ft_isdigit('@'));  // Expected: 0
    printf("%d\n", ft_isdigit(' '));  // Expected: 0
    printf("%d\n", ft_isdigit('#'));  // Expected: 0
    printf("%d\n", ft_isdigit(200)); // Expected: 0 (since it’s not a character)
    printf("%d\n", ft_isdigit(-1));  // Expected: 0 (since it’s not a character)

    return 0;
}
*/