#include "../includes/ft_lib.h"

#define BASE_TYPE 16

char *g_program_name;

void ft_hexdump(int argc, char **argv)
{
	int j;
	int r;
	int fd;
	unsigned char buffer[17];

	if (argc > 2 && (argv[1][0] == '-') && (argv[1][1] == 'C'))
	{

		j = 0;
		g_program_name = basename(*argv);
		argv = argv + 2;
		while (argc > 2)
		{
			if ((fd = open(*argv, O_RDONLY)) == -1)
			{
				ft_display_error(errno, *argv);
			}
			else
			{
				while ((r = read(fd, buffer, BASE_TYPE)))
				{
					if (r == -1)
					{
						ft_display_error(errno, *argv);
						break;
					}
					ft_print_memory(buffer, r, j);	
					j += BASE_TYPE;
				}
				if (close(fd))
				{
					ft_display_error(errno, *argv);
				}
			}
			argc--;
			argv++;
		}
		ft_print_hex_addr(j);
		ft_putchar('\n');
	}
	else 
	{
		ft_stdin();
	}	
}
