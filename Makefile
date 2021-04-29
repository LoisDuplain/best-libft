-include sources.mk
-include includes.mk

NAME			=	libft.a

BLACK			=	\033[0;30m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
ORANGE			=	\033[0;33m
BLUE			=	\033[0;34m
PURPLE			=	\033[0;35m
CYAN			=	\033[0;36m
LIGHT_GRAY		=	\033[0;37m
DARK_GRAY		=	\033[1;30m
LIGHT_RED		=	\033[1;31m
LIGHT_GREEN		=	\033[1;32m
YELLOW			=	\033[1;33m
LIGHT_BLUE		=	\033[1;34m
LIGHT_PURPLE	=	\033[1;35m
LIGHT_CYAN		=	\033[1;36m
WHITE			=	\033[1;37m
NO_COLOR		=	\033[0m

INCLUDES_PATH	=	./includes
OBJS			=	$(SOURCES:.c=.o)

GCC				=	gcc
FLAGS			=	-Wall -Wextra -Werror -O3 -Ofast -flto -march=native -ffast-math
RM				=	rm -f

all: $(NAME)

%.o:	%.c $(INCLUDES)
	@$(GCC) $(FLAGS) -I $(INCLUDES_PATH) -c $< -o $@
	@printf "\033[2K\r$(BLUE)$(NAME): $(PURPLE)$<$(RESET)"

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@printf "\033[2K\r$(BLUE)$(NAME): $(GREEN)Compiled [√]$(RESET)\n"

clean:
	@$(RM) $(OBJS)
	@printf "$(BLUE)$(NAME): $(LIGHT_RED)Cleaning all .o in libft.\n$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(BLUE)$(NAME): $(RED)Cleaning compiled library $(NAME).\n$(RESET)"

re: fclean all

gmk:
	@printf "$(BLUE)$(NAME): $(GREEN)Generating Makefile includes.\n$(RESET)"
	@find sources -name '*.c' | sed 's/^/SOURCES += /' > sources.mk
	@find includes -name '*.h' | sed 's/^/INCLUDES += /' > includes.mk

norminette: clean
	@printf "$(BLUE)$(NAME): $(GREEN)norminette -> sources\n$(RESET)"
	@norminette sources
	@echo " "
	@printf "$(BLUE)$(NAME): $(GREEN)norminette -> includes\n$(RESET)"
	@norminette includes

norminette-exported: clean
	@printf "$(BLUE)$(NAME): $(GREEN)norminette exported\n$(RESET)"
	@norminette

export:
	@./scripts/export.sh
	@printf "$(BLUE)$(NAME): $(YELLOW)Libft exported.\n$(RESET)"

end:
	@make fclean
	@make gmk
	@make all
	@make norminette
	@make fclean
	@make export
	@printf "$(BLUE)$(NAME): $(LIGHT_CYAN)Prepared to be pushed.\n$(RESET)"

.PHONY: all clean fclean re gmk norminette norminette-exported export end
