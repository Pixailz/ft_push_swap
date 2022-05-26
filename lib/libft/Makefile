# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 01:36:34 by brda-sil          #+#    #+#              #
#    Updated: 2022/05/26 21:46:42 by brda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# config
CFLAGS			:= -Wall -Wextra
TARGET			:= libft.a
RM				:= rm -rf
CC				:= gcc
VERSION			:= 1.0.0

ifneq ($(PADDING),30)
PADDING			:= 30
endif

ifeq ($(DEBUG),)
CFLAGS			+= -Werror
else
CFLAGS			+= -g3
endif

# DIR
SRC_DIR			:= src
OBJ_DIR			:= obj
INC_DIR			:= includes

# SRC
SRC_C			:= src/ft_lstmap.c \
				   src/ft_putstr_fd.c \
				   src/ft_strcat.c \
				   src/ft_strchr.c \
				   src/ft_lstlast.c \
				   src/ft_strspn.c \
				   src/ft_isalpha.c \
				   src/ft_lstsize.c \
				   src/ft_strlcpy.c \
				   src/ft_isalnum.c \
				   src/ft_isascii.c \
				   src/ft_itoa.c \
				   src/ft_lstadd_front.c \
				   src/ft_memchr.c \
				   src/ft_isdigit.c \
				   src/ft_split.c \
				   src/ft_strtrim.c \
				   src/ft_striteri.c \
				   src/ft_lstiter.c \
				   src/ft_memcmp.c \
				   src/ft_calloc.c \
				   src/ft_memset.c \
				   src/ft_split_free.c \
				   src/ft_strmapi.c \
				   src/ft_strjoin.c \
				   src/ft_atoi.c \
				   src/ft_atol.c \
				   src/ft_putchar_fd.c \
				   src/ft_nbrlen.c \
				   src/ft_strrchr.c \
				   src/ft_putnbr_fd.c \
				   src/ft_memcpy.c \
				   src/ft_strncmp.c \
				   src/ft_memmove.c \
				   src/ft_strdup.c \
				   src/ft_lstnew.c \
				   src/ft_lstdelone.c \
				   src/ft_substr.c \
				   src/ft_tolower.c \
				   src/ft_toupper.c \
				   src/ft_get_words.c \
				   src/ft_strtok.c \
				   src/ft_strlcat.c \
				   src/ft_putendl_fd.c \
				   src/ft_strncat.c \
				   src/ft_strnstr.c \
				   src/ft_lstclear.c \
				   src/ft_strcpy.c \
				   src/ft_lstadd_back.c \
				   src/ft_bzero.c \
				   src/ft_strlen.c \
				   src/ft_strcspn.c \
				   src/ft_isprint.c

# OBJ
OBJ_C			:= $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SRC_C:%.c=%.o))

CFLAGS			+= -I$(INC_DIR)

#  Bash Color / unicode char

#get_random		= $(shell seq 0 256 | shuf | head -n1)
green			:= \033[38;5;82m
blue			:= \033[38;5;75m
red				:= \033[38;5;196m
orange			:= \033[38;5;214m

blinking		:= \033[5m
reset			:= \033[0m

font_color		:= $(blue)
bold			:= $(green)
ascii_color		:= $(bold)

green_plus		:= $(font_color)[$(green)+$(font_color)]
red_minus		:= $(font_color)[$(red)-$(font_color)]
orange_star		:= $(font_color)[$(orange)*$(font_color)]
blinking_arrow	:= $(blinking)$(font_color)->
#font_color		:= \033[38;5;$(get_random)m
#bold			:= \033[38;5;$(get_random)m
#ascii_color		:= \033[38;5;$(get_random)m

UL="\xe2\x95\x94"
HO="\xe2\x95\x90"
UR="\xe2\x95\x97"
VE="\xe2\x95\x91"
LL="\xe2\x95\x9a"
LR="\xe2\x95\x9d"

# **************************************************************************** #

# **************************************************************************** #
# utils

define ascii_art
██╗     ██╗██████╗ ███████╗████████╗
██║     ██║██╔══██╗██╔════╝╚══██╔══╝
██║     ██║██████╔╝█████╗     ██║
██║     ██║██╔══██╗██╔══╝     ██║
███████╗██║██████╔╝██║        ██║
╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝
$(reset)
endef
export ascii_art

get_length_str = $(shell )

define print_padded
	@printf '   $(orange_star) $(font_color)Creation of $(bold)$1'
	$(eval OBJ_LEN := $(shell printf $1 | wc -c))
	$(eval PAD_LEN := $(shell expr $(PADDING) - $(OBJ_LEN)))
	@printf '%-$(PAD_LEN)s' ' '
	@printf '$(blinking_arrow) $(reset)$(bold)$2 $(reset)'
	@printf '\n'
endef

define usage
$(orange_star) $(bold)$(TARGET)$(font_color): $(bold)needed_args \
$(font_color)[$(bold)optional_args$(font_color)]$(reset)
        $(bold)arg$(font_color): eplanation
        $(bold)arg$(font_color): eplanation
        $(bold)arg$(font_color): eplanation, $(bold)WARNING$(reset)
$(font_color)Version: $(bold)$(VERSION)$(reset)

endef
export usage
# **************************************************************************** #

# **************************************************************************** #
# Rules

all:			setup $(TARGET)
ifneq ($(MAIN),1)
	@printf "$$usage"
endif

$(OBJ_DIR)/%.o: 		$(SRC_DIR)/%.c
	$(call print_padded,$^,$@)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(TARGET):				$(OBJ_C)
	@printf "$(green_plus) $(font_color)Creation of $(bold)$@$(reset)\n"
	@ar rcs $(TARGET) $(OBJ_C)

setup:					call_logo $(OBJ_DIR)

call_logo:
	@printf "$(ascii_color)$$ascii_art"

$(OBJ_DIR):
	@printf "$(green_plus) $(font_color)Creation of $(bold)$(OBJ_DIR)$(reset)\n"
	@mkdir -p $(OBJ_DIR)

clean:
	@printf "$(red_minus) $(font_color)Deleting $(bold)$(OBJ_DIR)$(reset)\n"
	@$(RM) $(OBJ_DIR)

fclean:					clean
	@printf "$(red_minus) $(font_color)Deleting $(bold)$(TARGET)$(reset)\n"
	@$(RM) $(TARGET)

re:						fclean all

.PHONY:					all clean fclean re setup lib call_logo

# **************************************************************************** #
