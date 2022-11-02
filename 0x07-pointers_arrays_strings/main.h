#ifndef MAIN_H
#define MAIN_H
char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int_strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strtbrk(char *s, char *accept);

char *_strstr(char *haystak, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

int _putchar(char c);

#endif /*MAIN_H*/
