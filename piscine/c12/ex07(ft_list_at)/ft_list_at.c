#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	if (nbr == 0)
		return ((void *)0);
	i = 1;
	while (i < nbr)
	{
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			return ((void *)0);
		i++;
	}
	return (begin_list);
}
