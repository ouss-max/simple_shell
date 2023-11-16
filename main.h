#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>

extern char **environ;

/* PATH Shell Functions */

/* Program Flow */

int prm(void);
char *rd(void);
char *flp(char **av, char *PATH, char *copy);
int cblt(char **av, char *buffer, int exitstatus);
int frk(char **av, char *buffer, char *fullpathbuffer);

/* String Helper Functions */

char *strdp(char *str);
int splst(char *str);
int strcp(const char *s1, const char *s2);
char *strct(char *dest, char *src);
int strln(char *s);

/*Tokenize & PATH Helper Functions*/

char **tokenize(char *buffer);
int _splitPATH(char *str);
int _PATHstrcmp(const char *s1, const char *s2);
char *_concat(char *tmp, char **av, char *tok);

/*Other Helper Funcs*/

char *_getenv(const char *name);
int _env(void);
void _puts(char *str);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

#endif /* HOLBERTON_H */
