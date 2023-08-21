#include "../includes/ft_lib.h"

void ft_display_file(int argc, char **argv)
{
	int	fd = -1;
	char	buffer;
	int	r;	

	if (argc < 2)
		ft_putstr("File name missing.");
	else if (argc > 2)
		ft_putstr("Too many arguments");
	else if (argc == 2)
	{
		if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0 ||
			ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0 ||
			ft_strcmp(argv[1], "../") == 0)
		{
			ft_putstr(argv[1]);
			ft_putstr(": Is a directory.\n");
		}
		else if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			ft_putstr("No such file or directory.\n");
		}
		else
		{
				while ((r = read(fd, &buffer, 1)))
				{
					if (r == -1)
					{
						ft_putstr("Check file permissions.\n");
						break;
					}
					else
					{
						ft_putchar(buffer);
					}
				}
				if (close(fd) == -1)
					ft_putstr("Cannot read file");
				else
					ft_putchar('\n');
		}
	}
}
