*0x09. C - Static libraries*
This is the step by step process for the solving the static library project!
1. Create the 0x09... Folder and put a non empty README.md file in it.
You can git push this before continuation.

2. Go to your alx-low_level_programming directory/repo

then paste 

cp -r 0x02-functions_nested_loops/3-islower.c 0x02-functions_nested_loops/4-isalpha.c 0x02-functions_nested_loops/6-abs.c 0x04-more_functions_nested_loops/0-isupper.c 0x04-more_functions_nested_loops/1-isdigit.c 0x05-pointers_arrays_strings/2-strlen.c 0x05-pointers_arrays_strings/3-puts.c 0x05-pointers_arrays_strings/9-strcpy.c 0x05-pointers_arrays_strings/100-atoi.c 0x06-pointers_arrays_strings/0-strcat.c 0x06-pointers_arrays_strings/1-strncat.c 0x06-pointers_arrays_strings/2-strncpy.c 0x06-pointers_arrays_strings/3-strcmp.c 0x06-pointers_arrays_strings/_putchar.c 0x07-pointers_arrays_strings/0-memset.c 0x07-pointers_arrays_strings/1-memcpy.c 0x07-pointers_arrays_strings/2-strchr.c 0x07-pointers_arrays_strings/3-strspn.c 0x07-pointers_arrays_strings/4-strpbrk.c 0x07-pointers_arrays_strings/5-strstr.c 0x09-static_libraries

this will copy all the needed files all at once (20 in total actually)

3. Create a main.h file that contains the prototype of all this functions.
your main.h file should be

#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif

4. Now,
You can start the creation of your static library
First

gcc -c *.c

(This will create a .o file from all the .c files)

Then to archive do
ar -rc libmy.a *.o

Then to index do
ranlib libmy.a

To confirm

ar -t libmy.a

You should have 20 .o files as shown below

__________________________________

0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o

__________________________

5. To Push only your libmy.a and main.h
Create a .gitignore file

e.g vi .gitignore
then add these 2 lines

*.c
*.o

6. git add .
7. git commit -m "insert your commit message"
8. git push

9. Check your codes, it shouls all check out.

