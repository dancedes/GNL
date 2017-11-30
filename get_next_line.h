/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vludan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:12:28 by vludan            #+#    #+#             */
/*   Updated: 2017/11/30 11:23:45 by vludan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 5000

# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_lst
{
	int				ds;
	char			*buff;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
