/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:31:11 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:31:12 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg < 32 || arg > 126)
		return (0);
	return (1);
}
/*

int main() {
    printf("%d\n", ft_isprint('A'));  // Expected: 1 (printable character)
    printf("%d\n", ft_isprint('z'));  // Expected: 1 (printable character)
    printf("%d\n", ft_isprint('1'));  // Expected: 1 (printable character)
    printf("%d\n", ft_isprint('@'));  // Expected: 1 (printable character)
    printf("%d\n", ft_isprint(' '));  // Expected: 1 (printable character)
    printf("%d\n", ft_isprint('#'));  // Expected: 1 (printable character)
    
    printf("%d\n", ft_isprint(31));   // Expected: 0 (non-printable)
    printf("%d\n", ft_isprint(32));   // Expected: 1 (space, printable)
    printf("%d\n", ft_isprint(127));  // Expected: 0 (DEL, non-printable)
    printf("%d\n", ft_isprint(-1));   // Expected: 0 (out of range)
    printf("%d\n", ft_isprint(200));  // Expected: 0 (out of printable range)

    return 0;
}
*/