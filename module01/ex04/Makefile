NAME =	replace

OBJ_DIR =	objs

SRCS =	main.cpp
OBJS =	$(SRCS:.cpp=.o)

OBJS_PATH =	$(addprefix $(OBJ_DIR)/, $(OBJS))

CC =	clang++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ_DIR) $(OBJS_PATH)
	$(CC) $(OBJS_PATH) -o $(NAME)
	@echo "\\n\033[32;1m REPLACE HAS BEEN GENERATED \033[0m \\n"

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Created: $@\033[1A\033[M"

all: $(NAME)

clean:
	rm -rf $(OBJS_PATH) $(OBJ_DIR)
	@echo "\033[34;1m CLEANED OBJECT FILES \033[0m"

fclean: clean
	rm -f $(NAME)
	@echo "\033[34;1m CLEANED REPLACE \033[0m"

re: fclean all

.PHONY: all clean fclean re
