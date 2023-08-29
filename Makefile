SRCS	:=	main.c \
			ft_atol.c \
			ft_putstr_fd.c \
			handle_error.c \
			init_stack.c \
			find.c \
			checkers.c \
			coord_comp.c \
			sort.c \
			cmd_p.c \
			cmd_s.c \
			cmd_r.c \
			cmd_rr.c \
			sort.c \
			qsort.c \
			print.c

OBJS	:=	$(SRCS:.c=.o)
NAME	:=	push_swap
CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror -g
RM		:=	rm -rf
HFILE	:=	push_swap.h
# AR		:=	ar -rcs

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	@$(CC) $(CFLAGS) -o push_swap $(OBJS)

sall	:
	@$(MAKE) -s all

clean	:
	@$(RM) $(OBJS)

fclean	:	clean
	@$(RM) $(NAME) *.o a.out

re		:	fclean all
sre		:	fclean sall

files	:
	@touch $(SRCS)

commit	:
	git status
	git add $(SRCS) $(HFILE) Makefile 
	git commit -m "commit all through Makefile"
	git status

.PHONY	:=	all clean fclean re files