/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <ppimchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:39:45 by ppimchan          #+#    #+#             */
/*   Updated: 2023/02/08 02:22:40 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h> // read
#include <stdlib.h> // malloc

# ifndef BUFFER_SIZE
#   define BUFFER_SIZE 10000
# endif

char *get_next_line(int fd);
size_t ft_strlen(const char *s);
int ft_char_index(const char *s, int c);
char *truncate_storage(char *storage);
char *storage_join(char *storage,char *buffer);

# endif