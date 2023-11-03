#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void  exit_with_98(const char *msg);
void  parse_and_print(Elf64_Ehdr *header);
void  print_magic(Elf64_Ehdr *header);
void  print_class(Elf64_Ehdr *header);
void  print_data(Elf64_Ehdr *header);
void  print_version(Elf64_Ehdr *header);
void  print_os_abi(Elf64_Ehdr *header);
void  print_type(Elf64_Ehdr *header);
void  print_entry(Elf64_Ehdr *header);
void  print_type(Elf64_Ehdr *header);
void  print_abi(Elf64_Ehdr *header);
int  test_header(Elf64_Ehdr *header);
/**
 * main - check the code
 * @ac: argument count
 * @av: argument passed to program
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd = -1;
	off_t offset;
	int read_count = 0;
	Elf64_Ehdr  header;

	if (ac != 2)
		exit_with_98("Wrong number of arguments");

	fd =  open(av[1], O_RDONLY);
	if (fd < 0)
		exit_with_98("Can't open file for reading");

	offset = lseek(fd, 0, SEEK_SET);
	if (offset != 0)
		exit_with_98("Can't seek start of the file");

	read_count = read(fd, &header, sizeof(Elf64_Ehdr));
	if (read_count < -1)
		exit_with_98("Can't read file");
	if (!(test_header(&header)))
		exit_with_98("Not header file");
	if (read_count != sizeof(Elf64_Ehdr))
		exit_with_98("Can't read complete header");
	parse_and_print(&header);
	if (close(fd))
	{
		exit_with_98("Can't close file");
	}
	return (0);
}

/**
 * exit_with_98 - print error message and exit with code 98
 * @msg: error msg to be printed
 */
void exit_with_98(const char *msg)
{
	dprintf(2, "%s\n", msg);
	exit(98);
}

/**
 * parse_and_print - print content of header file
 * @header: pointer to struct of header file
 */
void parse_and_print(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_os_abi(header);
	print_abi(header);
	print_type(header);
	print_entry(header);
}


/**
 * test_header - test wether the file is header file
 * @header: pointer to sturct of header file
 *
 *Return: test result 1: if pass, 0 if fail
 */
int  test_header(Elf64_Ehdr *header)
{
	int i = 0;
	int test = 1;
	char cmp[4] = {0x7f, 0x45, 0x4c, 0x46};

	for (i = 0; i < 4; i++)
	{
		if (cmp[i] != header->e_ident[i])
		{
			test = 0;
			break;
		}
	}
	return (test);
}

/**
 * print_magic - print magic number
 * @header: pointer to sturct of header file
 */
void  print_magic(Elf64_Ehdr *header)
{
	int i = 0;

	printf("  Magic:   %02x", header->e_ident[0]);
	for (i = 0; i < 15; i++)
	{
		printf(" %02x", header->e_ident[i + 1]);
	}
	printf("\n");
}

/**
 * print_class - print class
 * @header: pointer to header file
 */
void  print_class(Elf64_Ehdr *header)
{
	char class = header->e_ident[4];

	switch (class)
	{
		case ELFCLASSNONE:
			printf("  Class:                             ELFCLASSNONE\n");
			break;
		case ELFCLASS32:
			printf("  Class:                             ELF32\n");
			break;
		case ELFCLASS64:
			printf("  Class:                             ELF64\n");
	}
}
/**
 * print_data - print data
 * @header: pointer to header file
 */
void  print_data(Elf64_Ehdr *header)
{
	char data = header->e_ident[5];

	switch (data)
	{
		case ELFDATANONE:
			printf("  Data:                             ELFDATANONE\n");
			break;
		case ELFDATA2LSB:
			printf("  Data:                              2's complement");
			printf(", little endian\n");
			break;
		case ELFDATA2MSB:
			printf("  Data:                              2's complement, big-endian\n");
	}

}
/**
 * print_version - print version
 * @header: pointer to header file
 */
void  print_version(Elf64_Ehdr *header)
{
	char version = header->e_ident[6];

	switch (version)
	{
		case EV_NONE:
			printf("  Version:                           1 (none)\n");
			break;
		case EV_CURRENT:
			printf("  Version:                           1 (current)\n");
			break;
	}
}
/**
 * print_os_abi - print os abi fields
 * @header: pointer to header file
 */
void  print_os_abi(Elf64_Ehdr *header)
{
	unsigned char os = header->e_ident[7];

	switch (os)
	{
		case ELFOSABI_SYSV:
			printf("  OS/ABI:                            UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("  OS/ABI:                            HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("  OS/ABI:                            NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("  OS/ABI:                            Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("  OS/ABI:                            Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("  OS/ABI:                            IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("  OS/ABI:                            FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("  OS/ABI:                            TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("  OS/ABI:                            ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("  OS/ABI:                            Stand-alone (embedded)\n");
			break;
	}
}
/**
 * print_abi - print abi fields
 * @header: pointer to header file
 */
void  print_abi(Elf64_Ehdr *header)
{
	printf("  ABI Version:                       %x\n", header->e_ident[8]);
}

/**
 * print_entry - print entry field
 * @header: pointer to field
 */
void  print_entry(Elf64_Ehdr *header)
{
	Elf64_Addr add = header->e_entry;

	printf("  Entry point address:               %p\n", (void *)add);
}
/**
 * print_type - print type field
 * @header: pointer to header file
 */
void  print_type(Elf64_Ehdr *header)
{
	uint16_t type = header->e_type;

	switch (type)
	{
		case ET_NONE:
			printf("  Type:                              NONE (Unknown file)\n");
			break;
		case ET_REL:
			printf("  Type:                              REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("  Type:                              EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("  Type:                              DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("  Type:                              CORE (Core file)\n");
			break;
	}
}
