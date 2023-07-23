#include <unistd.h>

void ft_is_negative(int n)
{
	if (n >= 0)
	{
		char letter = 'P';
	      	write(1, &letter, 1);
	} 
	else 
	{
		char letter = 'N';
		write(1, &letter, 1);
	}
}

int main()
{
	ft_is_negative(3);
	ft_is_negative(-8);
}
