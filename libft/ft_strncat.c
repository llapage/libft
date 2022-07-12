/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:53:37 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 17:02:01 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = 0;
	while ((n > 0) && (s2[j]))
	{
		s1[i] = s2[j];
		i++;
		n--;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}