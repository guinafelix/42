void ft_swap(int *a, int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;
}

int main(void)
{
	int a = 2;
	int b = 3;
	ft_swap(&a, &b);
}

