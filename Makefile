# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 12:40:37 by koodal            #+#    #+#              #
#    Updated: 2025/10/27 16:46:56 by kkweon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
INCLUDE	= -I ./libft

SRC         = \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

objs	= $(src:.c=.o)
all:	$(NAME)

$(NAME):	$(obs)
	@ar -rcs $(NAME) $(obj) $(INCLUDE)
	@echo "$(GREY)Libft: $(GREEN)$(NAME) was created$(RESET)"

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	@$(REMOVE) $(obs)
	@echo "$(GREY)Libft: object files were deleted$(RESET)"

fclean:	clean
	@$(REMOVE) $(NAME)
	@echo "$(GREY)Libft: $(NAME) was delted$(RESET)"

re:	fclean($NAME)

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus

