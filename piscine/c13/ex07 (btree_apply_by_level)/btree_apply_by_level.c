#include "ft_btree.h"
# define MAX(a,b) ((a > b) ? a : b)


int		g_level = 0;


int		btree_level_count(t_btree *root)
{
	if (root)
		return (1 + MAX(btree_level_count(root->left), \
				btree_level_count(root->right)));
	return (0);
}


void	btree_apply_to_level(t_btree *root, int level, int is_first_elem,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (root)
	{
		if (level == g_level)
			(*applyf)(root->item, level, is_first_elem);
		else
		{
			btree_apply_to_level(root->left, level + 1, is_first_elem, applyf);
			btree_apply_to_level(root->right, level + 1, 0, applyf);
		}
	}
}


void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
	int current_level, int is_first_elem))
{
	int		height;

	height = btree_level_count(root);
	while (g_level < height)
	{
		btree_apply_to_level(root, 0, 1, applyf);
		g_level++;
	}
}
