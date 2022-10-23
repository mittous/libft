
NAME = libft.a
SRCS =				ft_isalpha.c\
					ft_isascii.c\
					ft_strlen.c\
					ft_isdigit.c\
					ft_isalnum.c\
					ft_isprint.c\
					ft_toupper.c\
					ft_tolower.c\
					ft_strchr.c\
					ft_strrchr.c\
					ft_split.c

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
