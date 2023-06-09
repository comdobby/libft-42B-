/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:54:35 by saryu             #+#    #+#             */
/*   Updated: 2023/06/01 18:54:37 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Outputs the string 's' to the given file descriptor followed by a newline.
 * */

void    ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0') {
        ft_putchar_fd(s[i], fd);
        write(1, "\n", 2);
        i++;
    }
}
/*
#include <stdio.h>
int main(void)
{
    char str[10] = "korea";
    ft_putendl_fd(str, 1);
    return (0);
}*/