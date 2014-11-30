# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spochez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/06 17:47:13 by spochez           #+#    #+#              #
#    Updated: 2014/11/26 03:30:26 by spochez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

F =		./srcs/

I =		./includes/

SRC =	$(F)ft_atoi.c		\
		$(F)ft_bzero.c		\
		$(F)ft_isalnum.c	\
		$(F)ft_isalpha.c	\
		$(F)ft_isascii.c	\
		$(F)ft_isdigit.c	\
		$(F)ft_isprint.c	\
		$(F)ft_itoa.c		\
		$(F)ft_memalloc.c	\
		$(F)ft_memccpy.c	\
		$(F)ft_memchr.c		\
		$(F)ft_memcmp.c		\
		$(F)ft_memcpy.c		\
		$(F)ft_memdel.c		\
		$(F)ft_memmove.c	\
		$(F)ft_memset.c		\
		$(F)ft_putchar.c	\
		$(F)ft_putchar_fd.c	\
		$(F)ft_putendl.c	\
		$(F)ft_putendl_fd.c	\
		$(F)ft_putnbr.c		\
		$(F)ft_putnbr_fd.c	\
		$(F)ft_putstr.c		\
		$(F)ft_putstr_fd.c	\
		$(F)ft_strcat.c		\
		$(F)ft_strchr.c		\
		$(F)ft_strrchr.c	\
		$(F)ft_strclr.c		\
		$(F)ft_strcmp.c		\
		$(F)ft_strncmp.c	\
		$(F)ft_strcpy.c		\
		$(F)ft_strncpy.c	\
		$(F)ft_strdnup.c	\
		$(F)ft_strdup.c		\
		$(F)ft_strdel.c		\
		$(F)ft_strequ.c		\
		$(F)ft_strnequ.c	\
		$(F)ft_striter.c	\
		$(F)ft_striteri.c	\
		$(F)ft_strjoin.c	\
		$(F)ft_strlen.c		\
		$(F)ft_strlcat.c	\
		$(F)ft_strmap.c		\
		$(F)ft_strmapi.c	\
		$(F)ft_strncat.c	\
		$(F)ft_strndup.c	\
		$(F)ft_strnew.c		\
		$(F)ft_strnlen.c	\
		$(F)ft_strnstr.c	\
		$(F)ft_strstr.c		\
		$(F)ft_strrchr.c	\
		$(F)ft_strsplit.c	\
		$(F)ft_strsub.c		\
		$(F)ft_strtrim.c	\
		$(F)ft_tolower.c	\
		$(F)ft_toupper.c	\

OBJ =	ft_atoi.o		\
		ft_bzero.o		\
		ft_isalnum.o	\
		ft_isalpha.o	\
		ft_isascii.o	\
		ft_isdigit.o	\
		ft_isprint.o	\
		ft_itoa.o		\
		ft_memalloc.o	\
		ft_memccpy.o	\
		ft_memchr.o		\
		ft_memcmp.o		\
		ft_memcpy.o		\
		ft_memdel.o		\
		ft_memmove.o	\
		ft_memset.o		\
		ft_putchar.o	\
		ft_putchar_fd.o	\
		ft_putendl.o	\
		ft_putendl_fd.o	\
		ft_putnbr.o		\
		ft_putnbr_fd.o	\
		ft_putstr.o		\
		ft_putstr_fd.o	\
		ft_strcat.o		\
		ft_strchr.o		\
		ft_strclr.o		\
		ft_strcmp.o		\
		ft_strncmp.o	\
		ft_strcpy.o		\
		ft_strncpy.o	\
		ft_strdnup.o	\
		ft_strdup.o		\
		ft_strdel.o		\
		ft_strequ.o		\
		ft_strnequ.o	\
		ft_striter.o	\
		ft_striteri.o	\
		ft_strjoin.o	\
		ft_strlen.o		\
		ft_strlcat.o	\
		ft_strmap.o		\
		ft_strmapi.o	\
		ft_strncat.o	\
		ft_strndup.o	\
		ft_strnew.o		\
		ft_strnlen.o	\
		ft_strnstr.o	\
		ft_strstr.o		\
		ft_strrchr.o	\
		ft_strsplit.o	\
		ft_strsub.o		\
		ft_strtrim.o	\
		ft_tolower.o	\
		ft_toupper.o	\

CFLAGS += -I./includes -Wall -Wextra -Werror -I$(I)

all : $(NAME)

$(NAME) :
	gcc -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(OBJ) $(NAME) a.out

re : fclean all
