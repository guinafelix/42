#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*last;
	t_list	*current;

	last = NULL;
	current = *begin_list;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
				*begin_list = current->next;
			else
				last->next = current->next;
			last = current;
			current = current->next;
			free_fct(last);
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}
