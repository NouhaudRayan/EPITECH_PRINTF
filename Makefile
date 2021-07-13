##
## EPITECH PROJECT, 2020
## make file for printf
## File description:
## sous fonction lib
##

SRC	= 	flags_hashtag.c				\
		flags_less.c				\
		flags_more.c				\
		flags_space.c				\
		flags_zero.c				\
		for_strlen.c				\
		get_size.c					\
		my_atoll.c					\
		my_first_size.c				\
		my_getnbr.c					\
		my_longlen.c				\
		my_nbr_base.c				\
		my_printf.c					\
		my_putchar.c				\
		my_put_nbrbase.c			\
		my_put_nbr.c				\
		my_putstr.c					\
		my_revstr.c					\
		my_strlen.c					\
		size_str.c					\
		specifer_b.c				\
		specifer_c.c				\
		specifer_d_i.c				\
		specifer_n.c				\
		specifer_o.c				\
		specifer_p.c				\
		specifer_pourcent.c			\
		specifer_s.c				\
		specifer_smaj.c				\
		specifer_u.c				\
		specifer_x.c				\
		specifer_xmaj.c				\
		width_number.c				\
		choice.c

OBJ  =  $(SRC:.c=.o)

NAME  =		libmy.a

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean:		clean
	rm -f all
	rm -f $(NAME)
	rm -f *~

re:
	rm $(NAME)