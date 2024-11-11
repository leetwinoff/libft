/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:29:12 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:29:14 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 65 && arg <= 90) 
		|| (arg >= 97 && arg <= 122)
		|| (arg >= 48 && arg <= 57))
		return (1);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    char test1 = 'A';
    printf("Test 1 - Input: '%c', Result: %d\n", test1, ft_isalnum(test1)); 
    char test2 = 'z';
    printf("Test 2 - Input: '%c', Result: %d\n", test2, ft_isalnum(test2)); 

    char test3 = '5';
    printf("Test 3 - Input: '%c', Result: %d\n", test3, ft_isalnum(test3));  

    char test4 = '@';
    printf("Test 4 - Input: '%c', Result: %d\n", test4, ft_isalnum(test4));  

    char test5 = ' ';
    printf("Test 5 - Input: '%c', Result: %d\n", test5, ft_isalnum(test5));  

    char test6 = 'a';
    printf("Test 6 - Input: '%c', Result: %d\n", test6, ft_isalnum(test6)); 

    char test7 = 'Z';
    printf("Test 7 - Input: '%c', Result: %d\n", test7, ft_isalnum(test7));

    return 0;
}
*/