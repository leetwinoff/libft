/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:34:30 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:34:32 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

int main()
{
    unsigned int n = 3;
    char a[] = "abcd";
    char b[] = "abc";
    char a1[] = "abca";
    char b1[] = "abcd";
    char a2[] = "abc";
    char b2[] = "abf";
    char a3[] = "abf";
    char b3[] = "abc";

    int result_ft = ft_strncmp(a, b, n);     
    int result1_ft = ft_strncmp(a1, b1, n);
    int result2_ft = ft_strncmp(a2, b2, n);
    int result3_ft = ft_strncmp(a3, b3, n);

    printf("Result should equal zero = %d\n", result_ft);   
    printf("Result should equal zero = %d\n", result1_ft);  
    printf("Result should be negative = %d\n", result2_ft); 
    printf("Result should be positive = %d\n", result3_ft); 

    unsigned int n1 = 3;
    char a1_std[] = "abcd";
    char b1_std[] = "abc";
    char a11_std[] = "abca";
    char b11_std[] = "abcd";
    char a21_std[] = "abc";
    char b21_std[] = "abf";
    char a31_std[] = "abf";
    char b31_std[] = "abc";

    int result_std1 = strncmp(a1_std, b1_std, n1);
    int result_std2 = strncmp(a11_std, b11_std, n1);
    int result_std3 = strncmp(a21_std, b21_std, n1);
    int result_std4 = strncmp(a31_std, b31_std, n1);

    printf("Standard Result should equal zero = %d\n", result_std1);
    printf("Standard Result should equal zero = %d\n", result_std2);
    printf("Standard Result should be negative = %d\n", result_std3);
    printf("Standard Result should be positive = %d\n", result_std4);

    return 0;
}
*/