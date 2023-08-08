SRCS1	:=	main.c \
			ft_atol.c \
			ft_putstr_fd.c \
			handle_error.c \
			init_stack.c \
			sort.c \
			cmd_p.c \
			cmd_s.c \
			cmd_r.c \
			cmd_rr.c \
			print.c

OBJS	:=	$(SRCS1:.c=.o)
NAME	:=	push_swap
CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror
RM		:=	rm -rf
# AR		:=	ar -rcs

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	@$(CC) $(CFLAGS) -g -o push_swap $(OBJS)

sall	:
	@$(MAKE) -s all

clean	:
	@$(RM) $(OBJS)

fclean	:	clean
	@$(RM) $(NAME) *.o a.out

re		:	fclean all
sre		:	fclean sall

files	:
	@touch $(SRCS1) $(SRCS2)

commit	:
	git status
	git add .
	git commit -m "commit all"
	git status

.PHONY	:=	all clean fclean re files