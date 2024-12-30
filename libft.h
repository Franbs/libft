/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:49:02 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/12/27 20:49:02 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

int				strncmp(const char *s1, const char *s2, size_t n);

size_t			ft_strlen(const char *str);

char			*strchr(const char *s, int c);

char			*strrchr(const char *str, int c);

#endif