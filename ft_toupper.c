/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:52:48 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/27 20:52:48 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - ('a' - 'A'));
	return (c);
}