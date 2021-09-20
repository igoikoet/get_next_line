/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <igoikoet@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:29:11 by igoikoet          #+#    #+#             */
/*   Updated: 2021/09/20 19:25:23 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

void	free_and_reset(void *var);
char	*ft_strchr(const char *s, int c);
ssize_t	read_line(char **holder, char **buffer, char **final_line, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	*split_line(char **holder);
char	*get_next_line(int fd);
void	*ft_memcpy(void *s, const void *src, size_t len);
#endif
