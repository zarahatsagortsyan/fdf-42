/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhatsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:39:31 by zhatsago          #+#    #+#             */
/*   Updated: 2021/02/02 18:06:09 by zhatsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		diff;
	size_t	i;

	diff = 0;
	i = 0;
	while (!diff && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		diff = s1[i] - s2[i];
		i++;
	}
	if (diff == 0)
	{
		if (ft_strlen(s1) > ft_strlen(s2) && ft_strlen(s2) < n)
			return (1);
		else if (ft_strlen(s1) < ft_strlen(s2) && ft_strlen(s1) < n)
			return (-1);
	}
	return (diff);
}
