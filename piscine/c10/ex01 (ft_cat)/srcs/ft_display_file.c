#include "../includes/ft_lib.h"

void ft_display_file(char *argv)
{
	int	fd = -1;
	char	buffer;
	int	r;	

	if ((fd = open(argv, O_RDONLY)) == -1)
		ft_display_error(errno, argv);
	else
	{
		while((r = read(fd, &buffer, 1)))
		{
			if (!r)
			{
				ft_display_error(errno, argv);
				break;
			}
			else
				ft_putchar(buffer);
		}
		if ((close(fd)) == -1)
			ft_display_error(errno, argv);
	}
}
