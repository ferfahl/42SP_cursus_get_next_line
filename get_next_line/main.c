/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:33:36 by feralves          #+#    #+#             */
/*   Updated: 2022/08/06 00:34:23 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*print;

	fd = open("test.txt", O_RDONLY);
	print = get_next_line(fd);
	printf("1st GNL return: %s", print);
	free(print);
	print = get_next_line(fd);
	printf("2nd GNL return: %s", print);
	free(print);
	print = get_next_line(fd);
	printf("3rd GNL return: %s", print);
	free(print);
	print = get_next_line(fd);
	printf("4th GNL return: %s", print);
	free(print);
	print = get_next_line(fd);
	printf("5th GNL return: %s", print);
}
