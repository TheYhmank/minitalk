# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 12:29:29 by anmakaro          #+#    #+#              #
#    Updated: 2024/02/10 16:28:48 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
DEF_COLOR	= \033[0;39m
GRAY		= \033[0;90m
RED			= \033[0;91m
GREEN		= \033[0;92m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN		= \033[0;96m
WHITE		= \033[0;97m
ORANGE		= \033[38;5;220m
GREEN_BR	= \033[38;5;118m

# Libft
LIBFT_DIR	= libft/
LIBFT_NAME	= libft.a
LIBFT		= $(LIBFT_DIR)$(LIBFT_NAME)

# Variables
NAMECL		= client
NAMESV		= server
NAMECB		= client_bonus
NAMESB		= server_bonus
CC			= cc
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs
INCLUDE		= -I ./incs/ -I ./libft/

# Sources
SRC_DIR_MINI	= srcs/

# Targets
all: $(LIBFT) $(NAMECL) $(NAMESV)

bonus: $(LIBFT) $(NAMECB) $(NAMESB)

$(LIBFT):
	@echo "$(MAGENTA)Getting libft ready$(DEF_COLOR)"
	@make -s -C $(LIBFT_DIR)

$(NAMECL): $(LIBFT)
	@$(RM) $(NAMECB)
	@$(CC) $(FLAGS) client.c -o $(NAMECL) $(LIBFT) $(INCLUDE)
	@echo "$(GREEN_BR)Client is ready!$(DEF_COLOR)"

$(NAMESV): $(LIBFT)
	@$(RM) $(NAMESB)
	@$(CC) $(FLAGS) server.c -o $(NAMESV) $(LIBFT) $(INCLUDE)
	@echo "$(ORANGE)Server is ready!$(DEF_COLOR)"

$(NAMECB): $(LIBFT)
	@$(RM) $(NAMECL)
	@$(CC) $(FLAGS) client_bonus.c -o $(NAMECB) $(LIBFT) $(INCLUDE)
	@echo "$(MAGENTA)Client bonus is ready!$(DEF_COLOR)"

$(NAMESB): $(LIBFT)
	@$(RM) $(NAMESV)
	@$(CC) $(FLAGS) server_bonus.c -o $(NAMESB) $(LIBFT) $(INCLUDE)
	@echo "$(CYAN)Server bonus is ready!$(DEF_COLOR)"

# Clean and fclean rules
clean:
	@echo "$(YELLOW)Removing libft$(DEF_COLOR)"
	@make clean -s -C $(LIBFT_DIR)

fclean: clean
	@echo "$(RED)Removing minitalk...$(DEF_COLOR)"
	@$(RM) $(NAMECL) $(NAMESV) $(NAMECB) $(NAMESB)
	@$(RM) $(LIBFT_DIR)$(LIBFT_NAME)

# Rebuild rule
re: fclean all
	@echo "$(BLUE)Cleaned and rebuilt everything for minitalk.$(DEF_COLOR)"

# Phony targets
.PHONY: all bonus clean fclean re
