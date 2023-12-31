#ifndef MAIN_H
#define MAIN_H

/* open, close, symbolic constants */
#include <unistd.h>

/* integer flags, file mode */
#include <fcntl.h>

/* malloc, free */
#include <stdlib.h>

/* size_t */
#include <stddef.h>

/* ssize_t */
#include <sys/types.h>

/* dprintf */
#include <stdio.h>

/* ELF type names  */
#include <elf.h>

/* prototype functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
