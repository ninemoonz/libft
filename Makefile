# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: koodal <koodal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 12:40:37 by koodal            #+#    #+#              #
#    Updated: 2025/10/24 19:58:24 by koodal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME        := libft.a

# Compiler & flags (42 norm: -Wall -Wextra -Werror)
CC          := cc
CFLAGS      := -Wall -Wextra -Werror
AR          := ar rcs
RM          := rm -f

# Directories
INC_DIR     := include
SRC_DIR     := src
BONUS_DIR   := bonus
OBJ_DIR     := obj
B_OBJ_DIR   := obj_bonus

# Files (adjust to match your actual .c files)
SRC         := \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRC   := \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

# Turn source lists into path-prefixed lists
SRCS        := $(addprefix $(SRC_DIR)/,$(SRC))
B_SRCS      := $(addprefix $(BONUS_DIR)/,$(BONUS_SRC))

# Object file lists
OBJS        := $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
B_OBJS      := $(addprefix $(B_OBJ_DIR)/,$(BONUS_SRC:.c=.o))

# Include flags
IFLAGS      := -I $(INC_DIR)

# Default target
.PHONY: all
all: $(NAME)

# Build library from mandatory objects
$(NAME): $(OBJ_DIR) $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Pattern rule: compile any .c into matching obj dir
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(B_OBJ_DIR)/%.o: $(BONUS_DIR)/%.c | $(B_OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

# Create obj dirs if missing
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(B_OBJ_DIR):
	mkdir -p $(B_OBJ_DIR)

# Bonus target adds/updates the same archive with bonus objs
.PHONY: bonus
bonus: $(B_OBJ_DIR) $(B_OBJS)
	$(AR) $(NAME) $(B_OBJS)

# Housekeeping
.PHONY: clean fclean re
clean:
	$(RM) -r $(OBJ_DIR) $(B_OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Optional convenience: show files
.PHONY: list
list:
	@echo "Sources: $(SRCS)"
	@echo "Bonus:   $(B_SRCS)"
