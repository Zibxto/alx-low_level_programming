#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

ssize_t read_textfile(const char *filename, size_t letters);


#endif
