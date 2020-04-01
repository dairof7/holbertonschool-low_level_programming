#include "holberton.h"
/**
 * main - Copies the content of a file to another file.
 * @ac: # of arguments.
 * @av: the arguments.
 * Return: 0.
 */
int main(int ac, char *av[])
{
	int fd1, fd2, rd = MAX_SIZE, wr, c1, c2;
	char temp[MAX_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(av[1], O_RDONLY);

	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while (rd == MAX_SIZE)
	{
		rd = read(fd1, temp, MAX_SIZE);
		wr = write(fd2, temp, rd);
	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (wr <= -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	return (0);
}
