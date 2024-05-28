##
## EPITECH PROJECT, 2023
## C-Utils
## File description:
## Makefile
##

CC 	= 	gcc

SRC	=	$(shell find ./lib -type f -name "*.c")

LIB_NAME 	= 	cutils.a

INCLUDE 	=	-I./include

CFLAGS	=	-Wall \
            -Werror \
            -Wextra \
            -W

all: 	$(LIB_NAME) clean

$(LIB_NAME):
	gcc -c $(SRC) $(INCLUDE) $(CFLAGS)
	ar rc $(LIB_NAME) *.o

clean:
	$(shell find ./ -type f -name "*.o" -delete)

fclean: 	clean
	rm -f $(LIB_NAME)

re: 	fclean all

.PHONY: all clean fclean re
