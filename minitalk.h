/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:07:27 by anmakaro          #+#    #+#             */
/*   Updated: 2024/02/10 17:02:34 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <wchar.h>
# include <stddef.h>
# include "libft/include/libft.h"

# define S_WLC "\n\033[0;94mWelcome to the server!\033[0m"
# define S_PID "\033[0;96mProcess ID: \033[0m"
# define S_END_TRANS "\033[0;90m\nThe end of the transaction.\033[0m\n"

# define C_ARGS "\033[38;5;214mCopy/paste server PID and add a string\033[0m"

void	ft_send_bit(int server_pid, char c);
void	ft_handle_signal(int signal, siginfo_t *siginfo, void *cont);

#endif
