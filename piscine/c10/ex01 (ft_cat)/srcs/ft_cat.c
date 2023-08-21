#include "../includes/ft_lib.h"

char *g_program_name;

void ft_cat(int argc, char **argv)
{
	int c;
	if (argc > 1)
	{
		g_program_name = basename(*argv);
		c = 0;
		while(++c < argc)
		{
			if (argv[c][0] == '-')
				ft_stdin();
			else
				ft_display_file(argv[c]);
		}
	}
	else
		ft_stdin();
}
