#ifndef ft_stock_str
#define ft_stocl_str

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;	

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int ft_strlen(char *str);
char *ft_strcpy(char *dest, char *str);
char *ft_strdup(char *str);


#endif
