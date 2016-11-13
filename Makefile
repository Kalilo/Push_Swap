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
	@$(call colourecho, "Making Checker")
	@Make -C Checker
	@$(call colourecho, "Making Push_Swap")
	@Make -C Push_Swap
	@if [ -f Checker/checker ]; then \
		cp Checker/checker checker; \
		fi
	@if [ -f Push_Swap/push_swap ]; then \
		cp Push_Swap/push_swap push_swap; \
		fi
	@$(call colourecho, "Done compiling all.")

libft:
	@$(call colourecho, "Making libft")
	@Make -C libft

Checker:
	@$(call colourecho, "Making Checker")
	@Make -C Checker

Push_Swap:
	@$(call colourecho, "Making Push_Swap")
	@Make -C Push_Swap

clean:
	@$(call colourecho, "Cleaning libft")
	@Make clean -C libft
	@$(call colourecho, "Cleaning Checker")
	@Make clean -C Checker
	@$(call colourecho, "Cleaning Push_Swap")
	@Make clean -C Push_Swap

fclean:
	@$(call colourecho, "Full cleaning libft")
	@Make fclean -C libft
	@$(call colourecho, "Full cleaning Checker")
	@Make fclean -C Checker
	@$(call colourecho, "Full cleaning Push_Swap")
	@Make fclean -C Push_Swap
	@if [ -f checker ]; then \
		rm checker; \
		fi
	@if [ -f push_swap ]; then \
		rm push_swap; \
		fi
	@$(call colourecho, "Done full cleaning folders")

re: fclean all
	@$(call colourecho, "re Done!")

format: norme me

norme: norm

norm:
	@clear
	@$(call colourecho2, "Norminette on libft")
	@Make norme -C libft
	@$(call colourecho2, "Norminette on Checker")
	@Make norme -C Checker
	@$(call colourecho2, "Norminette on Push_Swap")
	@Make norme -C Push_Swap

qme:
	@if [ ! -f author ]; then \
		whoami > author; \
	fi
	
me: qme
	cat -e author

.PHONY: clean fclean re odir
