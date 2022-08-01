/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:25:00 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 04:54:03 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUM_H
# define ENUM_H

typedef enum e_error {
	NO_ERROR,
	ERROR_MAP,
	ERROR_PARSING,
	ERROR_READ_FILE,
	ERROR_MALLOC,
	ERROR_RESOLVE,
	ERROR_INIT_ARGS,
}				t_error;

typedef enum e_bool {
	FALSE,
	TRUE
}				t_bool;

typedef enum e_step {
	INIT,
	ARGS,
	PROCCES,
	END,
}				t_step;

typedef enum e_init_step {
	READ,
	SIZE,
	CHAR_EMPTY,
	CHAR_OBS,
	CHAR_SQUAR,
	FINISH,
}				t_init_step;

#endif