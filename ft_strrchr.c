/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:02:50 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/29 22:02:50 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)last);
}

/*int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("str: %s, c: %c / %s", av[1], av[2], strchr(av[1], av[2]));
}*/