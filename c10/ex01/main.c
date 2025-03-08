#include "ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

int	main(int argc, char *argv[])
{
	// cat: dosya_adı: No such file or directory
	char	*file_path;
	int		i;
	int		fd;

	i = 1;
	while (i < argc)
	{
		file_path = argv[i];
		fd = open(file_path, O_RDONLY);
		if (fd == -1)
		{
			ft_puterr("cat: ");
			ft_puterr(basename(file_path));
			ft_puterr(": ");
			ft_puterr(strerror(errno));
			ft_puterr("\n");
		}
		else {
			ft_display_file(fd);
			close(fd);
		}
		i++;
	}
	return (0);
}