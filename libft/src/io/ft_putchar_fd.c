#include <unistd.h> // for write

int	ft_error(const char *errorMsg);

void	ft_putchar_fd(const char smb, int fd)
{
	if (0 > fd)
	{
		ft_error("Error:\nInvalid file descriptor.");
		return ;
	}
	write(fd, &smb, 1);
}
