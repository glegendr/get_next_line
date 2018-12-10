/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 17:49:09 by glegendr          #+#    #+#             */
/*   Updated: 2017/12/19 22:01:53 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/inc/libft.h"
# include "libvec/inc/vector.h"
# define BUFF_SIZE 12

int			get_next_line(const int fd, char **line);
#endif
