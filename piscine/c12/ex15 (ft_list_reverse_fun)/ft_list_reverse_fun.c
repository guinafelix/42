#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

void	ft_swap_data(t_list *a, t_list *b)
{
	t_list tmp;

	tmp.data = a->data;
	a->data = b->data;
	b->data = tmp.data;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*current;
	int		size;
	int		i;

	if (begin_list || begin_list->next)
	{
		size = ft_list_size(begin_list);
		while (size)
		{
			i = 0;
			current = begin_list;
			while (i < (size - 1))
			{
				ft_swap_data(current, current->next);
				current = current->next;
				i++;
			}
			size--;
		}
	}
}
