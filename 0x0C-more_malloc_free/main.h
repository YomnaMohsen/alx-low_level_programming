/* this prototype has to be declared in a header file */
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_nconcat(char *s1, char *s2, unsigned int b);
void  *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *malloc_checked(unsigned int b);
