#include "main.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or 98 on failure
 */
int main(int argc, char *argv[])
{
int fd, i;
ssize_t read_bytes;
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
return (98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
read_bytes = read(fd, &header, sizeof(header));
if (read_bytes != sizeof(header))
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
close(fd);
return (98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
return (98);
}
printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header.e_ident[i]);
printf("\n");
printf("Class: %d\n", header.e_ident[EI_CLASS]);
printf("Data: %d\n", header.e_ident[EI_DATA]);
printf("Version: %d\n", header.e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
printf("Type: %d\n", header.e_type);
printf("Entry point address: %lx\n", header.e_entry);
close(fd);
return (0);
}
