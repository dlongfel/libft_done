/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbrackswaide <richardbrackswaide@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 07:00:09 by richardbrac       #+#    #+#             */
/*   Updated: 2019/09/24 07:00:24 by richardbrac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*str_new;
	unsigned int	counter;

	str = (char *)s;
	if (str && f)
	{
		counter = 0;
		if (!(str_new = ft_memalloc(ft_strlen(str) + 1)))
			return (NULL);
		while (str[counter])
		{
			str_new[counter] = (*f)(counter, str[counter]);
			counter++;
		}
		str_new[counter] = '\0';
		return (str_new);
	}
	return (NULL);
}