cmake_minimum_required(VERSION 3.14)
project(print C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(libft)
include_directories(libft/includes)
include_directories(libft/src)

add_executable(print
        libft/includes/libft.h
        libft/src/ft_atoi.c
        libft/src/ft_base16_decoder.c
        libft/src/ft_base16_encoder.c
        libft/src/ft_bzero.c
        libft/src/ft_check.c
        libft/src/ft_isalnum.c
        libft/src/ft_isalpha.c
        libft/src/ft_isascii.c
        libft/src/ft_isdigit.c
        libft/src/ft_isprint.c
        libft/src/ft_itoa.c
        libft/src/ft_lstadd.c
        libft/src/ft_lstdel.c
        libft/src/ft_lstdelone.c
        libft/src/ft_lstiter.c
        libft/src/ft_lstmap.c
        libft/src/ft_lstnew.c
        libft/src/ft_memalloc.c
        libft/src/ft_memccpy.c
        libft/src/ft_memchr.c
        libft/src/ft_memcmp.c
        libft/src/ft_memcpy.c
        libft/src/ft_memdel.c
        libft/src/ft_memmove.c
        libft/src/ft_memset.c
        libft/src/ft_pow.c
        libft/src/ft_powd.c
        libft/src/ft_putchar.c
        libft/src/ft_putchar_fd.c
        libft/src/ft_putendl.c
        libft/src/ft_putendl_fd.c
        libft/src/ft_putnbr.c
        libft/src/ft_putnbr_fd.c
        libft/src/ft_putstr.c
        libft/src/ft_putstr_fd.c
        libft/src/ft_rot_n.c
        libft/src/ft_sqrt.c
        libft/src/ft_strcat.c
        libft/src/ft_strchr.c
        libft/src/ft_strclr.c
        libft/src/ft_strcmp.c
        libft/src/ft_strcpy.c
        libft/src/ft_strdel.c
        libft/src/ft_strdup.c
        libft/src/ft_strequ.c
        libft/src/ft_striter.c
        libft/src/ft_striteri.c
        libft/src/ft_strjoin.c
        libft/src/ft_strlcat.c
        libft/src/ft_strlen.c
        libft/src/ft_strmap.c
        libft/src/ft_strmapi.c
        libft/src/ft_strncat.c
        libft/src/ft_strncmp.c
        libft/src/ft_strncpy.c
        libft/src/ft_strnequ.c
        libft/src/ft_strnew.c
        libft/src/ft_strnstr.c
        libft/src/ft_strrchr.c
        libft/src/ft_strrev.c
        libft/src/ft_strsplit.c
        libft/src/ft_strstr.c
        libft/src/ft_strsub.c
        libft/src/ft_strtrim.c
        libft/src/ft_tolower.c
        libft/src/ft_toupper.c
        bonus_10_conv_fF.spec.c
        ft_check.c
        ft_floor.c
        ft_printf.c
        ft_strrev.c
        ft_strrev2.c
        ft_zerof.c
        libft.h
        )
