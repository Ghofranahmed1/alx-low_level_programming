#include "main.h"
/**
 * main - function the copey contant of  one file to anothe
 * @argc: argumen count
 * @argv: argument vector
 * Return: 0 on success, or a positive integer on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t read_byte, written_byte;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((read_byte = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_byte = write(fd_to, buffer, read_byte);
		if (written_byte != read_byte)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from), close(fd_to), exit(99);
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	}
	return (0);
}
