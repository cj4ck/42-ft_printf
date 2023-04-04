/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:10:07 by cjackows          #+#    #+#             */
/*   Updated: 2022/08/20 18:13:55 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

// -- core.c --- 
int	ft_printf(const char *str, ...);
int	ft_print(char c, char *str);
int	ft_putnbr(const char *c, int base, size_t nbr);
int	ft_pointer(const char *hex, size_t ptr);

#endif
