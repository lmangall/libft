# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 12:56:38 by lmangall          #+#    #+#              #
#    Updated: 2023/05/09 14:02:29 by lmangall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS_PATH = src/
OBJS_PATH = obj/

CC = cc -g

FLAGS = -Wall -Wextra -Werror

AR = ar -rcs

SRC_FILES = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strcmp.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

SOURCES = $(addprefix $(SRCS_PATH), $(SRC_FILES))
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

${NAME}: $(OBJS)
	@echo "$(NAME): Libft compiling..."
	@$(AR) $(NAME) $(OBJ)
#	@$(CC) $(FLAGS) $(SOURCES) -o $(NAME)
	@echo "$(NAME): Libft complete!"

clean:
	@echo "\n$(NAME): object (*.o) files were deleted"
	@rm -rf $(OBJECTS)

fclean: clean
	@echo "\n$(NAME) was deleted"
	@rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
