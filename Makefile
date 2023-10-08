NAME = libftprintf.a
SRC = ft_printf.c ft_writechar.c ft_writestr.c ft_writenbr.c ft_writeptr.c ft_writeuint.c ft_writehex.c


RM = rm -f
CC = cc
CCFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.cc
	$(CC) $(CCGLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re