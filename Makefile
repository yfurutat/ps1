SRCS1	:=	handle_error.c \
			init_stack.c \
			push_swap.c \
			ft_atol.c \
			ft_putstr_fd.c \
			main.c

OBJS	:=	$(SRCS1:.c=.o)
NAME	:=	push_swap
CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror
RM		:=	rm -rf
# AR		:=	ar -rcs

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	@$(CC) $(CFLAGS) -g -o push_swap $(OBJS)

clean	:
	@$(RM) $(OBJS)

fclean	:	clean
	@$(RM) $(NAME) *.o a.out

re		:	fclean all

files	:
	@touch $(SRCS1) $(SRCS2)

.PHONY	:=	all clean fclean re files