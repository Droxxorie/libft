# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eraad <eraad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 17:54:26 by marvin            #+#    #+#              #
#    Updated: 2025/01/08 22:08:46 by eraad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME		= libft.a
INCLUDES	= include
SRCS_DIR	= sources/
CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs

#Colors
DEF = \033[0m
Y = \033[0;93m
G = \033[0;92m
R = \033[0;91m

#Sources

SRC_FILES	=	ft_isalnum ft_isprint ft_isalpha ft_isdigit ft_isascii \
				ft_memcmp ft_memmove ft_memcpy ft_memchr ft_memset \
				ft_putchar_fd ft_putnbr_fd ft_putstr_fd ft_putendl_fd \
				ft_strlcat ft_strncmp ft_strchr ft_strlcpy ft_strnstr \
				ft_strlen ft_strrchr ft_strjoin ft_strmapi ft_strtrim \
				ft_striteri ft_strdup \
				ft_itoa ft_tolower ft_toupper ft_atoi \
				ft_split ft_substr ft_bzero ft_calloc \
				ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize
SRCS		= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS		= $(SRCS:.c=.o)

#Rules

.c.o:
					@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@
					@echo "$(Y)-Compiling $<$(DEF)"

all: $(NAME)

$(NAME):	$(OBJS)
					@$(AR) $(NAME) $(OBJS)
					@echo "$(G)--- ft_printf compiled succesfully! ---$(DEF)"

clean:
					@echo "$(Y)- Cleaning object files...$(DEF)"
					@$(RM) $(OBJS)
					@echo "$(R)- Object files cleaned!$(DEF)"

fclean:		clean
					@echo "$(Y)- Cleaning all build files...$(DEF)"
					@$(RM) $(NAME)
					@echo "$(R)- All build files cleaned!$(DEF)"

re:			fclean all

bonus:		re

.PHONY:		all clean fclean re bonus