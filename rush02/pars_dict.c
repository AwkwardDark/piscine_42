/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenier <jrenier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:34:24 by jrenier           #+#    #+#             */
/*   Updated: 2024/03/31 18:37:30 by jrenier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "rush02.h"

char	**ft_get_dict(int argc, char *argv[])
{
	char	buffer [2048];
	int		fd;
	int		bytes_nb;
	char	**dict;
	char	sep[0];

	dict = NULL;
	fd = 0;
	bytes_nb = -1;
	sep[0] = '\n';
	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	if (argc == 3)
		fd = open(argv[2], O_RDONLY);
	bytes_nb = read(fd, buffer, sizeof(buffer));
	if (bytes_nb == -1)
	{
		close(fd);
		return (NULL);
	}
	close(fd);
	dict = ft_split(buffer, sep);
	return (dict);
}
