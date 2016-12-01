CC		=	gcc
NAME		=	chifumi
NAME_LIB	=	libmy.a
AR		=	ar r
ARCH_LIB	=	ranlib
SRC		=	main.c \
			control.c \
			error.c \
			chifumi.c \
			print.c \
			list.c
SRC_LIB		=	lib_src/my_putchar.c \
			lib_src/my_isneg.c \
			lib_src/my_put_nbr.c \
			lib_src/my_swap.c \
			lib_src/my_putstr.c \
			lib_src/my_getnbr.c \
			lib_src/my_strcpy.c \
			lib_src/my_strncpy.c \
			lib_src/my_strcmp.c \
			lib_src/my_strncmp.c \
			lib_src/my_strcat.c \
			lib_src/my_strncat.c \
			lib_src/my_strncat.c \
			lib_src/my_strstr.c \
			lib_src/my_strdup.c \
			lib_src/my_str_to_wordtab.c \
			lib_src/my_strchr.c \
			lib_src/my_strlen.c \
			lib_src/my_fonctions.c \
			lib_src/my_strlowcase.c
OBJS_LIB	=	$(SRC_LIB:%.c=%.o)
OBJS		=	$(SRC:%.c=%.o)
RM		=	rm -f
CFLAGS		=	-Wall -Werror -Wextra -L.
LDFLAGS		=	-lmy

all		:	$(NAME_LIB) $(NAME)

$(NAME_LIB)	:	$(OBJS_LIB)
			$(AR) $(NAME_LIB) $(OBJS_LIB)
			$(ARCH_LIB) $(NAME_LIB)

$(NAME)		:	$(OBJS)
			$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LDFLAGS)

clean		:
			$(RM) $(OBJS)
			$(RM) $(NAME_LIB)

fclean		:	clean
			$(RM) $(NAME)

.PHONY		:	fclean all

re		:	fclean all
