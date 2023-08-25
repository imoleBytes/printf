#ifndef _main_h
#define _main_h

#define NUMBER_OF_CHAR 1024



int _printf(const char *format, ...);
int __putchar(char c);
char * intToStr(char * a, int num, int base, int upper);
int handle_str(char *str);
void _print_rev_recursion(char *s, int *ctt);
int handle_r(char *str);
int handle_percent_sign(char c);
char *rot13(char *s);
int handle_R(char *str);


#endif
