# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khansman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 08:49:59 by khansman          #+#    #+#              #
#    Updated: 2016/11/13 08:50:03 by khansman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define colourecho
	@tput setaf 35
	@echo $1
	@tput sgr0
endef

define colourecho2
	@tput setaf 36
	@echo $1
	@tput sgr0
endef

all: qme
	@$(call colourecho, "Making libft")
	@Make -C libft
	@$(call colourecho, "Making checker")
	@Make -C checker
	@$(call colourecho, "Making checker")
	@Make -C checker
	@$(call colourecho, "Done compiling all.")

libft:
	@$(call colourecho, "Making libft")
	@Make -C libft

checker:
	@$(call colourecho, "Making checker")
	@Make -C checker

push_swap:
	@$(call colourecho, "Making push_swap")
	@Make -C push_swap

clean:
	@$(call colourecho, "Cleaning libft")
	@Make clean -C libft
	@$(call colourecho, "Cleaning checker")
	@Make clean -C checker
	@$(call colourecho, "Cleaning push_swap")
	@Make clean -C push_swap

fclean:
	@$(call colourecho, "Full cleaning libft")
	@Make fclean -C libft
	@$(call colourecho, "Full cleaning checker")
	@Make fclean -C checker
	@$(call colourecho, "Full cleaning push_swap")
	@Make fclean -C push_swap

re: fclean all
	@$(call colourecho, "re Done!")

format: norme me

norme: norm

norm:
	@clear
	@$(call colourecho2, "Norminette on libft")
	@Make norme -C libft
	@$(call colourecho2, "Norminette on checker")
	@Make norme -C checker
	@$(call colourecho2, "Norminette on push_swap")
	@Make norme -C push_swap

qme:
	@if [ ! -f author ]; then \
		whoami > author; \
	fi
	
me: qme
	cat -e author

.PHONY: clean fclean re odir
