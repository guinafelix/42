#include "ft_list.h"

void ft_list_push_front(t_list **begin, void *data)
{
	t_list *list;

	if (*begin)
	{
		list = ft_create_elem(data);
		list->next = *begin;
		*begin = list;
	}
	else
		*begin = ft_create_elem(data);
}
