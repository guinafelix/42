#ifndef	ft_btree
#define ft_btree

#include <stdlib.h>

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void	*item;
}			t_btree;

t_btree *btree_create_node(void *item)
{
        t_btree         *tree;

        if ((tree = (t_btree *)malloc(sizeof(t_btree))))
        {
                tree->left = ((void *)0);
                tree->right = ((void *)0);
                tree->item = item;
        }
        return (tree);
}


#endif
