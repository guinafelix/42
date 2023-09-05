#include "ft_lib.h" 

t_list *ft_create_elem(void *data)
{
	t_list *tmp;

	if ((tmp = (t_list *) malloc(sizeof(t_list))) == ((void *)0))
		return ((void *)0);
	tmp->data = data;
	tmp->next = ((void *)0);
	return (tmp);
}

