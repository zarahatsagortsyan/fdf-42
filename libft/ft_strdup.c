/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhatsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:29:37 by zhatsago          #+#    #+#             */
/*   Updated: 2021/02/01 18:29:47 by zhatsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*s1;

	len = ft_strlen(s);
	if (!(s1 = malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	ft_memcpy(s1, s, len);
	*(s1 + len) = '\0';
	return (s1);
}
