/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 23:37:42 by rlecart           #+#    #+#             */
/*   Updated: 2017/04/04 13:18:52 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 20
# include "libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct			s_struct
{
	char				*adr;
	char				*head;
	char				*keep;
	int					gol;
	int					ret;
	int					fd;
	struct s_struct		*before;
	struct s_struct		*next;
}						t_struct;

typedef struct			s_gsml
{
	char				*tmp;
	char				*keep_tmp;
}						t_gsml;

int						get_next_line(const int fd, char **line);

#endif
