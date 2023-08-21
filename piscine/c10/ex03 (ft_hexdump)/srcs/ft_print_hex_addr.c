#include "../includes/ft_lib.h"

void ft_print_hex_addr(int offset)
{	
	ft_print_byte_hex((unsigned char)(offset >> 24)); // Primeiro byte
	ft_print_byte_hex((unsigned char)(offset >> 16)); // Segundo byte
	ft_print_byte_hex((unsigned char)(offset >> 8));  // Terceiro byte
	ft_print_byte_hex((unsigned char)offset); 
	ft_putchar(':');
	ft_putchar(' '); 
}
