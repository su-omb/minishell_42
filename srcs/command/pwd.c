/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 11:03:38 by obouykou          #+#    #+#             */
/*   Updated: 2020/12/02 14:19:27 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int		ft_pwd(t_ms *ms)
{
	free(ms->pwd);
	ms->pwd = getcwd(NULL, 0);
	ft_putendl_fd(ms->pwd, 1);
	return (0);
}
