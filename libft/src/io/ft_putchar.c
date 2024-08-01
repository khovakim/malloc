void	ft_putchar_fd(const char smb, int fd);

void	ft_putchar(const char smb)
{
	ft_putchar_fd(smb, 1);
}
