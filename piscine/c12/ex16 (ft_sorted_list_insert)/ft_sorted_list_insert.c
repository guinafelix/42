#include "ft_list.h"

void	ft_swap_data(t_list *a, t_list *b)
{
	t_list tmp;

	tmp.data = a->data;
	a->data = b->data;
	b->data = tmp.data;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *current;
	t_list *next;

	current = *begin_list;
	while (current->next)
	{
		next = current->next;
		if ((*cmp)(current->data, next->data) > 0)
		{
			ft_swap_data(current, next);
			current = *begin_list;
		}
		else
			current = next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *current;

	current = *begin_list;
	if (!current)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = ft_create_elem(data);
		ft_list_sort(begin_list, (*cmp));
	}
}
