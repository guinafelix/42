#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*tmp;
	t_list	*list;
	int		i;

	i = 1;
	list = ft_create_elem(strs[0]);
	tmp = list;
	while (i < size)
	{
		list = ft_create_elem(strs[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
