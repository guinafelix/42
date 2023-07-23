void ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i = 0;
	while(i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size- i -1] = temp;
		i++;
	}
}

int main (void)
{
	int a[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(a, 5);
}
