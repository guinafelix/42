#include "../includes/ft_lib.h"

void ft_file_name(int c, int argc, char *argv)
{
	if (argc > 4)
	{
		if (c >= 4)
			ft_putstr("\n------ ");
		else
			ft_putstr("------ ");
		ft_putstr(argv);
		ft_putstr("-------");
	}
}
