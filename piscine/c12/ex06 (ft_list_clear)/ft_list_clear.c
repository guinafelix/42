/*
void	free_fct(void *data)
{
	free(data);
}
*/

void	ft_list_clear(t_list **begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		tmp = list->next;
		if (list->data)
			free_fct(list->data);
		free(list);
		list = tmp;
	}
	*begin_list = NULL;
}
