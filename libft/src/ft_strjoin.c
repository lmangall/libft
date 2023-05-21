/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:02:18 by lmangall          #+#    #+#             */
/*   Updated: 2023/05/07 18:05:04 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*get rid of s1len by using ft_strlen*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1len;
	size_t	lentotal;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1) + 1;
	lentotal = s1len + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (lentotal));
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, s1len);
	ft_strlcat(joined, s2, lentotal);
	return (joined);
}
/*
int main (void)
{
    char const		s1[] = "Give me my s2 =>";
	char const		s2[] = "<= here I am, my dear s1";

    printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/