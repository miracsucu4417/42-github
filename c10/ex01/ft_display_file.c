#include <unistd.h>

void	ft_display_file(int fd)
{
	char	buffer[29000];
	int		bytes_read;

	while (1)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read <= 0)
			return ;
		write(1, buffer, bytes_read);
	}
}