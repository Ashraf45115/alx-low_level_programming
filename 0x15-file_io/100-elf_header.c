#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - prints elf magic bytes
 * @h: the elf header struct
*/

void print_magic(Elf64_Ehdr h)
{
	int a;

	printf("   Magic:   ");
	for (a = 0; a < EI_NIDENT; a++)
		printf("%2.2x%s", h.e_ident[a], a == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class(Elf64_Ehdr h)
 * @h: the elf header struct
*/

void print_class(Elf64_Ehdr h)
{
	printf("  Class:			");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - print elf data
 * @h:  the elf header struct
*/

void print_data(Elf64_Ehdr h)
{
	printf("  DATA:					");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
