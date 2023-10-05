#include "main.h"
#include "elf.h"
#include <sys/types.h>

/**
 * main - print info from ELF header from an ELF file
 * @argc: arguments count
 * @av: arguments vector
 * Return: 0 (success)
 * @By Yassine Borak
 */
int main(int argc, char *av[])
{
	Elf64_Ehdr *ELF;
	int fd, rstat;

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "readelf: Error: '%s': No such file\n", av[1]);
		exit(98);
	}

	ELF = malloc(sizeof(Elf64_Ehdr));
	if (ELF == NULL)
	{
		close(fd);
		dprintf(2, "readelf: Error: failed reading file '%s'\n", av[1]);
		exit(98);
	}

	rstat = read(fd, ELF, sizeof(Elf64_Ehdr));
	if (rstat == -1)
	{
		free(ELF);
		close(fd);
		dprintf(2, "readelf: Error: failed reading file '%s'\n", av[1]);
		exit(98);
	}

	ELF_check(ELF->e_ident, av[1]);
	printf("ELF Header:\n");
	ELF_magic(ELF->e_ident);
	ELF_class(ELF->e_ident);
	ELF_data(ELF->e_ident);
	ELF_version(ELF->e_ident);

	free(ELF);
	(void)argc;
	return (0);
}
/**
 * ELF_check - checks if the file is an ELF file
 * @e_ident: the ELF magic number
 * @str: filename
 */
void ELF_check(unsigned char *e_ident, char *str)
{
	const char elf_magic[] = {0x7f, 'E', 'L', 'F'};

	if (e_ident[0] != elf_magic[0] || e_ident[1] != elf_magic[1] ||
	    e_ident[2] != elf_magic[2] || e_ident[3] != elf_magic[3])
	{
		dprintf(2, "elfread: Error: '%s': Not an ELF file\n", str);
		exit(98);
	}
}
/**
 * ELF_magic - display the magic number
 * @e_ident: the ELF magic number
 * @str: filename
 */
void ELF_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", e_ident[i]);
		if (i == 15)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * ELF_class - display the ELF file class
 * @e_ident: the ELF magic number
 */
void ELF_class(unsigned char *e_ident)
{
        printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
/**
 * ELF_data - display the ELF file data
 * @e_ident: the ELF magic number
 */
void ELF_data(unsigned char *e_ident)
{
        printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else  if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
/**
 * ELF_version - display the ELF file version
 * @e_ident: the ELF magic number
 */
void ELF_version(unsigned char *e_ident)
{
        printf("  Version:                           ");
	printf("%d", e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
