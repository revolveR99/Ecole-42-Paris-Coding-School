/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:31:30 by hece              #+#    #+#             */
/*   Updated: 2023/03/26 16:22:22 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_itoa_base(unsigned long long nbr, int base, char *str, int mod);
int	handle_pointer(va_list args);
int	ft_check_format(va_list args, char format);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_itoa_base(unsigned long long nbr, int base, char *str, int mod);
int	handle_pointer(va_list args);
int	ft_check_format(va_list args, char format);

#endif
