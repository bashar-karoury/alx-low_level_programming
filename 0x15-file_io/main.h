#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif