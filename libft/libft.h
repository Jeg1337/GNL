/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:35:53 by dnigella          #+#    #+#             */
/*   Updated: 2019/09/30 20:44:44 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

int		ft_isalpha(int c);

void	*ft_memccpy(void *dest, const void *source, int c, size_t n);

void	*ft_memchr(const void *arr, int c, size_t n);

int		ft_memcmp(const void *buf1, const void *buf2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t num);

void	*ft_memmove(void *dest, const void *source, size_t num);

void	*ft_memset(void *memptr, int val, size_t len);

char	*ft_strcat(char *dest, const char *src);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(const char *src);

char	*ft_itoa(int n);

int		ft_strlen(const char *str);

char	*ft_strncat(char *dest, const char *source, size_t n);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strncpy(char *dest, const char *src, size_t n);

char	*ft_strstr(const char *s1, const char *s2);

char	*ft_strmap(char const *s, char (*f)(char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_putchar(char c);

void	ft_putstr(const char *s);

void	ft_putchar_fd(char c, int fd);

int		ft_strnequ(char const *s1, char const *s2, size_t n);

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr(int n);

void	ft_putstr_fd(const char *s, int fd);

void	ft_putendl_fd(const char *s, int fd);

void	ft_putendl(const char *s);

char	*ft_strcncat(char *dest, const char *source, size_t n);

char	*ft_strchr(const char *str, int ch);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strrchr(const char *str, int ch);

int		ft_isdigit(int ch);

int		ft_isalnum(int ch);

int		ft_isascii(int ch);

int		ft_isprint(int ch);

int		ft_toupper(int ch);

int		ft_tolower(int ch);

int		ft_strequ(const char *s1, const char *s2);

char	*ft_strnew(size_t size);

void	ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_strclr(char *s);

void	ft_strdel(char **as);

void	ft_memdel(void **ap);

char	*ft_strtrim(char const *s);

void	*ft_memalloc(size_t size);

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

char	**ft_strsplit(char const *s, char c);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strsub(const char *s, unsigned int start, size_t len);

#endif
