/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:13:39 by lmangall          #+#    #+#             */
/*   Updated: 2023/05/09 13:42:29 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size <= 0)
		return (size);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
    char dst[20];
    const char src[] = "take me to dst, bitch!";
    size_t size = 15;
     size_t r;

    r = ft_strlcpy(dst, src, size);
    write(1, &dst, 20);
     printf("%zu\n", r);
*/
/*
    strlcpy(dst, src, size);
    write(1, &dst, 20);
*/
