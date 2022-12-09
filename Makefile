# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbadura <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 14:49:25 by cbadura           #+#    #+#              #
#    Updated: 2022/12/07 14:49:35 by cbadura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= libft.a
SRCS 			= ft_atoi.c ft_bzero.c ft_calloc.c \
				ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_itoa.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c\
				ft_memmove.c ft_memset.c ft_putchar_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
				ft_split.c ft_strchr.c ft_strdup.c \
				ft_striteri.c ft_strjoin.c ft_strlcat.c \
				ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c \
				ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRCS_BONUS		= ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c \
             	ft_lstsize_bonus.c \

OBJS			= ${SRCS:.c=.o}
OBJS_BONUS		= ${SRCS_BONUS:.c=.o}

ifdef WITH_BONUS
OBJS_LIST = $(OBJS) $(OBJS_BONUS)
else
OBJS_LIST = $(OBJS)
endif

CFLAGS		= -Wall -Wextra -Werror
CC			= cc
RM			= rm -f

all:	$(NAME)

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS_LIST)
		ar -rv $(NAME) $(OBJS_LIST)
		ranlib $(NAME)

bonus:
		make WITH_BONUS=1 all

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		clean all