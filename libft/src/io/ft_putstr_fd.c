#include <unistd.h> // for write

size_t ft_strlen(const char *str);
int ft_error(const char *errorMsg);

void ft_putstr_fd(const char *str, int fd)
{
    if (0 > fd)
    {
        ft_error("Error:\nInvalid file descriptor.");
		return ;
    }
    write (fd, str, ft_strlen(str));
}