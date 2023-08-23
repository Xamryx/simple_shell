#ifndef SHELL_H
#define SHELL_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<limits.h>
#include<fcntl.h>
#include<errno.h>

int main(void);
int interpreter(info_t *info);
int is_delim(char k, char *delim);
int _isalpha(int i);
int _atoi(char *s);

#endif
