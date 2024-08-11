void ft_putendl_fd(const char *str, int fd);

void ft_putendl(const char *str)
{
    ft_putendl_fd(str, 1);
}