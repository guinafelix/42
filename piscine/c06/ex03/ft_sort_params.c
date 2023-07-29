#include <unistd.h>

void ft_swap(char **a, char **b)
{
	char *temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int ft_strcmp (char *s1,  char *s2)
{
	while((*s1 == *s2) && (*s1 != '\0') && (*s2 ))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str++, 1);
	}
	write(1, "\n", 1);
}

void ft_print_argv(char **argv)
{
	while(*argv)
	{
		ft_putstr(*argv++);
	}
}

int main(int argc, char **argv)
{
	int find;
	int i;
	char *tmp;

	find = 1;
	while (find)
	{
		find = 0;
		i = 0;
		while (++i < (int) argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				find = 1;
			}
		}
	}
	ft_print_argv(++argv);
	return (0);
}
