#include <unistd.h>

int main(int argc, char **argv)
{
	int c = 1;
	if ((int) argc == 1)
		return 0;
	while(c < (int) argc)
	{
		while(*argv[c])
		{
			write(1, &*argv[c]++, 1);
		}
		write(1, "\n", 2);
		c++;
	}
}
