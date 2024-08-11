void	ft_putstr_fd(const char *str, int fd);

void	ft_putstr(const char *str)
{
	ft_putstr_fd(str, 1);
}