/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olitvino <olitvino@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:05:40 by olitvino          #+#    #+#             */
/*   Updated: 2024/11/11 12:05:44 by olitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int  find_max_div(int n)
{
    int div;

    div = 1;
    if (n == 0)
        return (div);
    while (div <= n / 10)
        div *=10;
    return (div);
}

void	ft_putnbr_fd(int n, int fd)
{
    char  ch;
    int div;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    div = find_max_div(n);
    while (div > 0)
    {
        ch = (n / div) + '0';
        write(fd, &ch, 1);
        n %= div;
        div /= 10;
    }
}
/*
int main(){
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-214, 1);
	write(1, "\n", 1);
}
*/