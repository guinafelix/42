#ifndef ft_list
#define ft_list

#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void		*data;
} 			t_list;

t_list *ft_create_elem(void *data)
{
	t_list *tmp;

	if ((tmp = (t_list *) malloc(sizeof(t_list))) == ((void *)0))
		return ((void *)0);
	tmp->data = data;
	tmp->next = ((void *)0);
	return (tmp);
}

#endif
