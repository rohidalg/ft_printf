NAME = libftprintf.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCs = libft42/ft_isalnum.c \
	   libft42/ft_isalpha.c \
	   libft42/ft_isascii.c \
	   libft42/ft_isdigit.c \
	   libft42/ft_isprint.c \
	   libft42/ft_strlen.c \
	   libft42/ft_memset.c \
	   libft42/ft_memcpy.c \
	   libft42/ft_memmove.c \
	   libft42/ft_bzero.c  \
	   libft42/ft_strlcpy.c \
	   libft42/ft_strlcat.c \
	   libft42/ft_toupper.c	\
	   libft42/ft_tolower.c \
	   libft42/ft_strchr.c \
	   libft42/ft_strrchr.c \
	   libft42/ft_strncmp.c \
	   libft42/ft_memchr.c \
	   libft42/ft_memcmp.c \
	   libft42/ft_strnstr.c \
	   libft42/ft_atoi.c \
	   libft42/ft_calloc.c \
	   libft42/ft_strdup.c \
	   libft42/ft_substr.c \
	   libft42/ft_strjoin.c \
	   libft42/ft_strtrim.c \
	   libft42/ft_split.c \
	   libft42/ft_itoa.c \
	   libft42/ft_strmapi.c \
	   libft42/ft_striteri.c \
	   libft42/ft_putchar_fd.c \
	   libft42/ft_putstr_fd.c \
	   libft42/ft_putendl_fd.c \
	   libft42/ft_putnbr_fd.c \
	   ft_printf.c \
	   ft_printf_functions.c 

OBJs = $(SRCs:.c=.o)

all : $(NAME)

$(NAME) : $(OBJs)
	ar rcs $(NAME) $(OBJs)

$.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean : 
	$(RM) $(OBJs) 


fclean : clean 
	$(RM) $(NAME)


re : fclean all
