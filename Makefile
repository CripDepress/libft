SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c  ft_memset.c  ft_bzero.c   ft_memcpy.c \
			ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c  ft_strlcat.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c  ft_memcmp.c  ft_strnstr.c \
			ft_atoi.c    ft_calloc.c  ft_strdup.c
OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I.

NAME	=	libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

norm:
				norminette libft.h $(SRCS)

so:
				$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
				gcc -nostartfiles -shared -o libft.so $(OBJS)

test:
				make -C ../libft-unit-test

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME) a.out libft.so

re:			fclean $(NAME)

.PHONY:		all clean fclean re
