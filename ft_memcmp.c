/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:46:31 by saryu             #+#    #+#             */
/*   Updated: 2023/05/26 17:46:33 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * The  memcmp()  function compares the first n bytes (each interpreted as unsigned char)
 * of the memory areas s1 and s2.
 * */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const unsigned char *sp1;
    const unsigned char *sp2;

    i = 0;
    sp1 = (const unsigned char *)s1;
    sp2 = (const unsigned char *)s2;
    while (i < n)
    {
        if (sp1[i] != sp2[i])
            return (int)(sp1[i] - sp2[i]);
        i++;
    }
    return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int result1 = ft_memcmp("aaaa", "aabb", 2);
    int result2 = ft_memcmp("aaaa", "aacb", 3);
    printf("%d\n", result1);
    printf("%d\n", result2);

    return (0);
}*/