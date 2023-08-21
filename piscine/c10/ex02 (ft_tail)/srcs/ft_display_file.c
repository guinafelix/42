#include "../includes/ft_lib.h"

void ft_display_file(int c, int fd, int argc, char **argv)
{
	char	buffer;
	int	readed;
	int	offset;
	int 	np;

	if (argv[1][0] == '-' && (argv[1][1] == 'C' || argv[1][1] == 'c'))
		offset = (ft_line_count(argv[c]) - ft_atoi(argv[2]));
	else
		offset = (ft_line_count(argv[c]) - 10);
	if (argc > 4)
		ft_file_name(c, argc, argv[c]);
	readed = 0;
	while (readed < offset)
	{
		if ((np = read(fd, &buffer, 1)) == -1)
		{
			ft_display_error(errno, argv[c]);
			break;
		}
		if (buffer == '\n')
			readed ++;
	}		
	while ((np = read(fd, &buffer, 1)))		
	{
		if (np == -1)
		{
			ft_display_error(errno, argv[c]);
			break;
		}
		ft_putchar(buffer);
	}
}
