/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbannasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:01:50 by pbannasa          #+#    #+#             */
/*   Updated: 2024/01/23 16:09:20 by pbannasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//
//char	*ft_strstr(char *str, char *to_find)
//
//
//
int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";

    char *result = strstr(haystack, needle);

    if (result != NULL) {
        printf("Substring found at position: %s\n", result);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}

