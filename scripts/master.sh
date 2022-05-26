#!/bin/bash

bash ./lib/ft_printf/scripts/arrange_proto.sh
bash ./lib/ft_printf/scripts/arrange_src_makefile.sh
bash ./lib/ft_printf/scripts/arrange_check_static.sh

bash ./lib/gnl/scripts/arrange_proto.sh
bash ./lib/gnl/scripts/arrange_src_makefile.sh
bash ./lib/gnl/scripts/arrange_check_static.sh

bash ./lib/libft/scripts/arrange_proto.sh
bash ./lib/libft/scripts/arrange_src_makefile.sh
bash ./lib/libft/scripts/arrange_check_static.sh
