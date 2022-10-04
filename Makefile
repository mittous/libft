# you can see the following websites to understand the makfile better
# https://www.gnu.org/software/make/manual/make.htmlq
# https://www.math.colostate.edu/~yzhou/computer/writemakefile.html

NAME = libft.a
SRCS =				ft_isalpha.c\
					ft_isascii.c\
					ft_strlen.c\
					ft_isdigit.c\
					ft_isalnum.c\
					ft_isprint.c\
					ft_toupper.c\
					ft_tolower.c\

object = $(SRCS:.c=.o)
CC				= gcc

RM				= @rm -f

CFLAGS			= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(object)
	@ar -rc $(NAME) $(object)


clean:
	$(RM) $(object) $(bonusobject)

fclean: clean
	$(RM) $(NAME)

re: fclean all
