# Makefile es un archivo de configuracion.
# Sirve para describir reglas de construccion de un programa y las dependencias entre archivos fuente y objeto
# Se utiliza junto con la herramienta make

# Un Makefile tipico contiene reglas que indican como construir ejecutables, bibliotecas y otros componentes
# Especifica las dependencias entre los archivos fuente y objeto, lo que permite que 'make' determine automaticamente que archivos deben ser recompilados cuando se modifican ciertos archivos

NAME = libft.a

CC = gcc
SRC = ft_bzero.c

FLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
HEADER = libft.h

RM = rm -Rf ..swp -o .ft_ -o

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
	@echo "$(NAME) cleaned!$(NC)"

re : fclean all

.PHONY = all clean fclean re
