#ifndef _SHELL_H_
#define _SHELL_H_

#include<unistd.h>
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
int interactive(info_t *info);
int is_delim(char c, char *delim);
int _isalpha(int c);
int _atoi(char *s);

#endif
