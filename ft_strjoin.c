/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saryu <saryu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:27:53 by saryu             #+#    #+#             */
/*   Updated: 2023/05/30 17:28:03 by saryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of 's1' and 's2'.
 * */

char    *ft_strjoin(char const *s1, char const *s2)
{
    unsigned long   i;
    unsigned long   j;
    char            *result;

    i = 0;
    j = 0;
    result = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if (!result)
            return (NULL);
    while (i < (ft_strlen(s1) + ft_strlen(s2)))
    {
        while (i < ft_strlen(s1))
        {
            result[i] = s1[i];
            i++;
        }
        result[i] = s2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char *result = ft_strjoin("abcd", "");
    printf("%s\n", result);
    free(result);
    return (0);
}*/