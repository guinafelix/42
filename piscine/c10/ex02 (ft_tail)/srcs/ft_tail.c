#include "../includes/ft_lib.h"

char *g_program_name;

void ft_tail(int argc, char **argv)
{
	int fd;
	int c;
	
	if (argc > 1)
	{
		g_program_name = basename(*argv);
		if (argv[1][0] == '-' && (argv[1][1] == 'C' || argv[1][1] == 'c'))
			c = 3;
		else
			c = 1;
		while(c < argc)
		{
			if ((fd = open(argv[c], O_RDONLY)) == -1)
				ft_display_error(errno, argv[c]);
			else
			{	
				ft_display_file(c, fd, argc, argv);
				if (close(fd) == -1)
					ft_display_error(errno, argv[c]);
			}
			c++;
		}
	}
	else
		ft_stdin();	
}
