SRCS =	ft_print.c \
		ft_putstr.c \
		
CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f

NAME = libftprintf.a

all: $(NAME)
	@echo "\e[1;96mCompilation Successfull ! ✅ \e[0m"
	
$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS) 

clean:
	
	$(RM) $(OBJS)
	clear
	
	@echo "\e[5;96m🧽$<\e[0m  \e[1;96mClean By Yatamago Corp  \e[5;96m🧽"
	@echo -e

fclean: 
	
	$(RM) $(NAME) $(OBJS)
	clear
	@echo "\e[5;96m🧽$<\e[0m  \e[1;96mFclean By Yatamago Corp  \e[5;96m🧽"
	@echo -e

re: fclean all

.PHONY : all clean fclean re