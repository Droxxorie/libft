# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eraad <eraad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 17:54:26 by marvin            #+#    #+#              #
#    Updated: 2025/01/06 00:37:47 by eraad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_is/ft_isalnum.c ft_is/ft_isprint.c ft_is/ft_isalpha.c ft_is/ft_isdigit.c ft_is/ft_isascii.c \
		ft_mem/ft_memcmp.c ft_mem/ft_memmove.c ft_mem/ft_memcpy.c ft_mem/ft_memchr.c ft_mem/ft_memset.c \
		ft_put/ft_putchar_fd.c ft_put/ft_putnbr_fd.c ft_put/ft_putstr_fd.c ft_put/ft_putendl_fd.c \
		ft_str/ft_strlcat.c ft_str/ft_strncmp.c ft_str/ft_strchr.c ft_str/ft_strlcpy.c ft_str/ft_strnstr.c ft_str/ft_strlen.c ft_str/ft_strrchr.c ft_str/ft_strjoin.c ft_str/ft_strmapi.c ft_str/ft_strtrim.c ft_str/ft_striteri.c ft_str/ft_strdup.c \
		ft_to/ft_itoa.c ft_to/ft_tolower.c ft_to/ft_toupper.c ft_to/ft_atoi.c \
		ft_split.c ft_substr.c ft_bzero.c ft_calloc.c \
		ft_lst/ft_lstadd_back.c ft_lst/ft_lstadd_front.c ft_lst/ft_lstclear.c ft_lst/ft_lstdelone.c ft_lst/ft_lstiter.c ft_lst/ft_lstlast.c ft_lst/ft_lstmap.c ft_lst/ft_lstnew.c ft_lst/ft_lstsize.c \
		
OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re