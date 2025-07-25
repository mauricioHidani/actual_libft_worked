/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:37:22 by mhidani           #+#    #+#             */
/*   Updated: 2025/07/24 20:32:30 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>


/* Check and Manipulate character ------------------------------------------ */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/* Manipulate Strings ------------------------------------------------------ */
size_t	ft_strlen(char *s);
size_t	ft_strlcpy(char *dst, char *src, size_t dst_size);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// ft_strnstr
// ft_substr
// ft_strjoin
// ft_strtrim
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Manipulate Memory ------------------------------------------------------- */
void	*ft_calloc(size_t length, size_t mem_size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
// ft_memchr
// ft_memcmp
char	*ft_strdup(const char *src);

/* Numbers ----------------------------------------------------------------- */
// ft_atoi
char	*ft_itoa(int n);

/* Write to a File Descriptor ---------------------------------------------- */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* bonus ------------------------------------------------------------------- */
// ft_lstnew
// ft_lstadd_front
// ft_lstsize
// ft_lstlast
// ft_lstadd_back
// ft_lstdelone
// ft_lstclear
// ft_lstiter
// ft_lstmap

#endif