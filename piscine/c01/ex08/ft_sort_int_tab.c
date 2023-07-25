void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	while (i < size -1)
	{
		int j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j+1])
			{
				int temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int a[] = {5, 4, 3, 2, 1};
	ft_sort_int_tab(a, 5);
}
