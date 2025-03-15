# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eraad <eraad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/15 12:06:42 by eraad             #+#    #+#              #
#    Updated: 2025/03/15 12:17:26 by eraad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#* ------------------ Variables ---------------------- *
NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
INCLUDES	= -I./include

#* ------------------ Colors ------------------------- *
DEF = \033[0m
Y = \033[0;93m
G = \033[0;92m
R = \033[0;91m
ORANGE = \033[38;5;208m
LIGHT_GREEN = \033[38;5;120m
NEON_GREEN = \033[38;5;82m

#* ------------------ Sources ------------------------ *
SRCS_DIR	=	sources/
SRC_FILES	=	ft_is/ft_isalnum.c ft_is/ft_isalpha.c ft_is/ft_isascii.c ft_is/ft_isdigit.c ft_is/ft_isprint.c ft_is/ft_iswhitespace.c \
				ft_lst/ft_lstadd_back.c ft_lst/ft_lstadd_front.c ft_lst/ft_lstclear.c ft_lst/ft_lstdelone.c ft_lst/ft_lstiter.c ft_lst/ft_lstlast.c ft_lst/ft_lstmap.c ft_lst/ft_lstnew.c ft_lst/ft_lstsize.c \
				ft_mem/ft_bzero.c ft_mem/ft_calloc.c ft_mem/ft_memchr.c ft_mem/ft_memcmp.c ft_mem/ft_memcpy.c ft_mem/ft_memmove.c ft_mem/ft_memset.c ft_mem/ft_realloc.c \
				ft_put/ft_putchar_fd.c ft_put/ft_putendl_fd.c ft_put/ft_putnbr_fd.c ft_put/ft_putstr_fd.c \
				ft_str/ft_strchr.c ft_str/ft_strdup.c ft_str/ft_striteri.c ft_str/ft_strjoin.c ft_str/ft_strlcat.c ft_str/ft_strlcpy.c ft_str/ft_strlen.c ft_str/ft_strmapi.c ft_str/ft_strncmp.c ft_str/ft_strnstr.c ft_str/ft_strrchr.c ft_str/ft_strtrim.c ft_str/ft_substr.c \
				gnl/get_next_line.c \
				maths/ft_abs.c maths/ft_fabs.c maths/ft_pow.c maths/ft_argmax.c maths/ft_max.c maths/ft_min.c maths/ft_argmin.c \
				printf/ft_printaddr_fd.c printf/ft_printchar_fd.c printf/ft_printdbl.c printf/ft_printf.c printf/ft_printhex_fd.c printf/ft_printnbr_fd.c printf/ft_printstr_fd.c printf/ft_printunbr_fd.c \
				utils/ft_atodbl.c utils/ft_atoi.c utils/ft_count_words.c utils/ft_dbltoa.c utils/ft_intlen.c utils/ft_itoa.c utils/ft_split.c utils/ft_tolower.c utils/ft_toupper.c utils/ft_free_str_array.c utils/ft_free_2d_str_array.c \

SRCS = $(addprefix $(SRCS_DIR), $(SRC_FILES))

#* ------------------ Objects ------------------------ *
OBJS_DIR	=	objects/
OBJS		=	$(patsubst $(SRCS_DIR)%.c, $(OBJS_DIR)%.o, $(SRCS))

#* ------------------ Rules -------------------------- *
all: $(NAME)

$(NAME):	$(OBJS)
					@$(AR) $(NAME) $(OBJS)
					@echo "$(NEON_GREEN)     .---------. $(DEF)"
					@echo "$(NEON_GREEN)    (   libft   )$(DEF)"
					@echo "$(NEON_GREEN)     '---------' $(DEF)"



$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
				@mkdir -p $(dir $@)
				@$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
					@rm -rf $(OBJS_DIR)

fclean:		clean
					@rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re