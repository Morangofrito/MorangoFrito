$(NAME) = libft.a
$(CC) = cc
$(CFLAGS) = -Wextra -Werror -Wall

$(CC) -c $(CFLAGS) $< -o $@
