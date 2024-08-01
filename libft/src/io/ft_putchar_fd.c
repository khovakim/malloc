#include <unistd.h> // for write

int	ft_error(const char *errorMsg);
int	ft_isprint(int ch);

void	ft_putchar_fd(const char smb, int fd)
{
	if (0 > fd)
	{
		ft_error("Error:\nInvalid file descriptor.");
		return ;
	}
	if (0 == ft_isprint(smb))
	{
		ft_error("Error:\n Non printable character.");
		return ;
	}
	write(fd, &smb, 1);
}
