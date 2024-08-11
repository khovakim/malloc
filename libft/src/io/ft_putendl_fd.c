void    ft_putstr_fd(const char *str, int fd);
void    ft_putchar_fd(const char *ch, int fd);

void ft_putendl_fd(const char *str, int fd)
{
    if (0 > fd)
    {
        ft_error("Error:\nInvalid file descriptor.");
		return ;
    }
    ft_putstr_fd(str, fd);
    ft_putchar_fd('\n', fd);
}
