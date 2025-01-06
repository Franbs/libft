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
# include <string.h>
# include <stdio.h>

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

int				ft_atoi(const char *nptr);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

size_t			ft_strlen(const char *str);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

char			*ft_strchr(const char *s, int c);

char			*ft_strdup(const char *s);

char			*ft_strrchr(const char *str, int c);

char			*ft_strnstr(const char *big, const char *little, size_t len);

void			*ft_memset(void s[.n], int c, size_t n);

void			*ft_calloc(size_t nmemb, size_t size);

#endif