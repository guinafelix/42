int		btree_level_count(t_btree *root)
{
	int a;
	int b;

	if (root == ((void *)0))
		return (0);
	a = btree_level_count(root->left);
	b = btree_level_count(root->right);
	return (1 + (a > b ? a : b));
}
