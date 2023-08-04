#ifndef ft_boolean
#define ft_boolean

#include <unistd.h>

typedef int t_bool;
#define SUCCESS		0
#define TRUE		1
#define FALSE		0
#define EVEN_MSG	"I have an even number of arguments.\n"
#define	ODD_MSG		"I have an odd number of arguments.\n" 

int EVEN(int argc)
{
	if (argc % 2 == 0)
		return 1;
	return 0;
}

#endif
