# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggroener <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/22 11:13:09 by ggroener          #+#    #+#              #
#    Updated: 2016/07/02 14:44:24 by ggroener         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -Ofast

CC = gcc

INCLUDES_PATH = includes/

SRCS_PATH = srcs/

SRCS_NAME =		calc_sorted.c			\
				check_dur.c				\
				error_quit.c			\
				is_sorted.c				\
				main.c					\
				pa.c					\
				parse_args.c			\
				pb.c					\
				pre_sort.c				\
				print_a.c				\
				print_b.c				\
				ra.c					\
				rb.c					\
				rr.c					\
				rra.c					\
				rrb.c					\
				rrr.c					\
				sa.c					\
				sb.c					\
				sort.c					\
				sort_3.c				\
				sort_5.c				\
				ss.c					\
				valid_int.c				\

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))

OBJS_PATH = objs/

OBJS_NAME = $(SRCS_NAME:.c=.o)

OBJS = $(addprefix $(OBJS_PATH), $(OBJS_NAME))

LIBRARY = -L libft/ -lft

HEADERS =		env.h					\
				includes.h				\
				prototypes.h			\
				push_swap.h				\
				sort.h					\

HEADER = $(addprefix $(INCLUDES_PATH), $(HEADERS))

all: qme odir $(NAME)

$(NAME): $(OBJS)
	@Make -C libft
	@echo " - Making $(NAME)"
	@$(CC) $(CFLAGS) -o $(NAME) $^ $(LIBRARY) -I$(INCLUDES_PATH)
	@clear
	@echo "Make Done!"

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@echo " - Compiling $<"
	@$(CC) $(CFLAGS) -o $@ -c $< -I$(INCLUDES_PATH)
	@echo "Compiling Done!"

odir:
	@mkdir -p $(OBJS_PATH)

clean:
	@Make clean -C libft
	@echo " - Clearing objects files"
	@rm -f $(OBJS)
	@echo "clean Done!"

fclean: clean
	@Make fclean -C libft
	@echo " - Clearing executable file"
	@rm -f $(NAME)
	@echo "fclean Done!"

re: fclean all
	@echo "re Done!"

format: norm me

norme: norm

norm:
	@clear
	@echo "Norminette:"
	@norminette $(SRCS)
	@norminette $(HEADER)

qme:
	@if [ ! -f author ]; then \
		whoami > author; \
	fi
	
me: qme
	cat -a author

.PHONY: clean fclean re odir
