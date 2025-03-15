/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:53:38 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:53:38 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//* ----------------- Includes ----------------------- *
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include <fcntl.h>
# include <math.h>

//* ----------------- Macros ------------------------- *
# define BUFFER_SIZE 42
# define TRUE 1
# define FALSE 0

typedef int		t_bool;

//* ----------------- Structs ------------------------ *
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_atodbl
{
	int		sign;
	int		int_part;
	double	dec_part;
	double	frac;
	int		exp;
	int		exp_sign;
	double	result;
}	t_atodbl;

typedef struct s_dbltoa
{
	int		sign;
	int		int_part;
	double	dec_part;
	char	*int_str;
	char	*dec_str;
	char	*result;

}	t_dbltoa;

//* ----------------- ft_is -------------------------- *
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_iswhitespace(char c);

//* ----------------- ft_lst ------------------------- *
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//* ----------------- ft_mem ------------------------- *
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_realloc(void *ptr, size_t old_size, size_t new_size);

//* ----------------- ft_put ------------------------- *
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

//* ----------------- ft_str ------------------------- *
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);

//* ----------------- get_next_line ------------------ *
char	*get_next_line(int fd);

//* ----------------- maths -------------------------- *
int		ft_abs(int n);
double	ft_fabs(double n);
double	ft_max(double *array, int size);
double	ft_min(double *array, int size);
int		ft_argmax(double *array, int size);
int		ft_argmin(double *array, int size);
double	ft_pow(double base, double exponant);

//* ----------------- ft_printf ---------------------- *
int		ft_printnbr_fd(int n, int fd);
int		ft_printchar_fd(char c, int fd);
int		ft_printstr_fd(char *s, int fd);
int		ft_printf(const char *format, ...);
int		ft_printaddr_fd(void *adress, int fd);
int		ft_printunbr_fd(unsigned int n, int fd);
int		ft_printdbl_fd(double number, int fd, int precision);
int		ft_printhex_fd(unsigned int n, int fd, int uppercase);

//* ----------------- utils -------------------------- *
char	*ft_itoa(int n);
int		ft_intlen(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);
double	ft_atodbl(char *s);
int		ft_atoi(const char *nptr);
char	**ft_split(char const *s, char sep);
int		count_words(char const *s, char sep);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, long unsigned int n);
char	*ft_dbltoa(double number, int precision);
void	ft_free_str_array(char **array, int size);
void	ft_free_2d_str_array(char ***array, int size);

#endif