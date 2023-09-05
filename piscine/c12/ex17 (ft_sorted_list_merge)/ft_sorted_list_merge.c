#include "ft_list.h"

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*tmp;
	t_list	*last;

	last = ((void *)0);
	current = *begin_list;
	while (current->next)
	{
		if ((*cmp)(current->data, current->next->data) > 0)
		{
			if (current == *begin_list)
				last = *begin_list = (*begin_list)->next;
			else
				last = last->next = current->next;
			tmp = current->next->next;
			current->next->next = current;
			current->next = tmp;
			current = *begin_list;
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, 
							 int (*cmp)())
{
	t_list *current;

	if (*begin_list1)
	{
		if (begin_list2)
		{
			current = *begin_list1;
			while (current->next)
				current = current->next;
			current->next = begin_list2;
			ft_list_sort(begin_list1, (*cmp));
		}
	}
	else if (begin_list2)
	{
		*begin_list1 = begin_list2;
	}
}
