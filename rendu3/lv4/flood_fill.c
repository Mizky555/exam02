typedef struct	s_point
{
	int		x;
	int		y;
}	t_point;

void fill(char **tab, t_point size, t_point cur, char to_fill)
{
	
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
