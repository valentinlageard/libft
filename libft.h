/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 21:08:46 by vlageard          #+#    #+#             */
/*   Updated: 2020/03/05 19:04:27 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif


typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

char			**ft_split(char const *s, char c);
char			*ft_cdup(char c);
char			*ft_itoa(int n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_ultoabase(unsigned long n, const char *base);
char			*ft_utoa(unsigned int n);
char			*ft_utoabase(unsigned int n, const char *base);
int				ft_abs(int n);
int				ft_atoi(const char *nptr);
int				ft_get_next_line(int fd, char **line);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_iscinstr(char c, const char *str);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_lstsize(t_list *lst);
int				ft_max(int a, int b);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_min(int a, int b);
int				ft_rand(void);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list			*ft_lstnew(void *content);
unsigned int	ft_randr(unsigned int min, unsigned int max);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);


#endif
