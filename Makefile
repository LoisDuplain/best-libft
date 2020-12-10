# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduplain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 18:12:13 by dburgun           #+#    #+#              #
#    Updated: 2020/12/10 13:28:15 by lduplain         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

-include sources.mk

NAME		=	libft.a

INCLUDES	=	./includes
OBJS		=	$(SOURCES:.c=.o)

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

end:
	./scripts/end.sh

test: $(NAME)
	@echo "----- MAKEFILE TESTS -----"

.PHONY: all clean fclean re gmk norminette end test
