#ifndef MAIN_H
#define MAIN_H

/* Basic libraries */

#include <stdio.h>
#include <stdlib.h>

/* Prototype of _putchar */
int _putchar(char c);

/* Prototypes for the functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
