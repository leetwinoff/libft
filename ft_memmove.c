/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:32:08 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/06 12:32:09 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    int i;

    if (!dest && !src)
        return (NULL);
    if (dest > src)
    {
        i =(int) n - 1;
        while (i >= 0)
        {
            *( char *)(dest + i) = *(char *)(src + i);
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < (int)n)
        {
            *( char *)(dest + i) = *(char *)(src + i);
            i++;
        }
    }
    return (dest);
}
