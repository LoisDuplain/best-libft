SRCS += ft_append_strs.c
SRCS += ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_close_file.c
SRCS += ft_contains_char.c
SRCS += ft_find_char.c
SRCS += ft_memset.c
SRCS += ft_natoi.c
SRCS += ft_open_file.c
SRCS += ft_putchar.c
SRCS += ft_putchar_err.c
SRCS += ft_putchar_errnl.c
SRCS += ft_putchar_fd.c
SRCS += ft_putchar_fdnl.c
SRCS += ft_putchar_nl.c
SRCS += ft_putstr.c
SRCS += ft_putstr_err.c
SRCS += ft_putstr_errnl.c
SRCS += ft_putstr_fd.c
SRCS += ft_putstr_fdnl.c
SRCS += ft_putstr_nl.c
SRCS += ft_read_next_line.c
SRCS += ft_strcpy.c
SRCS += ft_strdup.c
SRCS += ft_strlen.c
SRCS += ft_strndup.c
SRCS += is_alpha.c
SRCS += is_alphanumeric.c
SRCS += is_ascii.c
SRCS += is_lowercase.c
SRCS += is_numeric.c
SRCS += is_printable.c
SRCS += is_space.c
SRCS += is_uppercase.c
SRCS += is_whitespace.c

NAME		=	libft.a

INCLUDES	=	./includes
OBJS		=	$(SRCS:.c=.o)

GCC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

.c.o:
	$(GCC) $(FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

gmk:
	./scripts/generate-mk.sh

norminette: clean
	norminette -R CheckForbiddenSourceHeader sources
	norminette -R CheckDefine includes

test: $(NAME)
	@echo "----- MAKEFILE TESTS -----"
	
convert:
	./scripts/convert.sh

end:
	./scripts/end.sh

.PHONY: all clean fclean re gmk norminette test convert end
