/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcatot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 14:36:22 by jcatot            #+#    #+#             */
/*   Updated: 2016/07/24 22:59:08 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 4096

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_count_line(char *str);
int		ft_strlen_split(char *str);
char	*ft_cpystr(char *str);
char	**ft_split(char *str);
int		ft_get_height(char **str);
void	ft_putnbr(int nb);
void	ft_putbrackets_putnbr(void (f)(int), int nb);
void	ft_putbrackets_putstr(void (f)(char*), char *str);
void	ft_get_colle(char **str);
int		ft_check_colle(char **str, int x_pos, int y_pos);
int		ft_check_colle00(char **str, int x_pos, int y_pos);
int		ft_check_colle01(char **str, int x_pos, int y_pos);

#endif
