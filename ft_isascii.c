/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:29:38 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:29:44 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main() {
    printf("%d\n", ft_isascii('A'));  // Expected: 1
    printf("%d\n", ft_isascii('z'));  // Expected: 1
    printf("%d\n", ft_isascii('1'));  // Expected: 1
    printf("%d\n", ft_isascii('@'));  // Expected: 1
    printf("%d\n", ft_isascii(' '));  // Expected: 1
    printf("%d\n", ft_isascii('#'));  // Expected: 1
    printf("%d\n", ft_isascii(200));  // Expected: 0
    printf("%d\n", ft_isascii(-1));    // Expected: 0
    return 0;
}
*/