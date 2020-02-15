# libft [![Build Status](https://api.travis-ci.com/HappyTramp/libft.svg?branch=master)](https://travis-ci.com/HappyTramp/libft)

libft is an extension/remake of the standard library.

## Getting Started

```
git clone https://github.com/HappyTramp/libft libft
cd libft
make all
```

This will produce a `libft.a` library which you can link to your project.

## Unit Test

```
make test
```

## Dependencies

* [Unity](https://github.com/ThrowTheSwitch/Unity) - unit testing lib

## .libftignore

Much like the `.gitignore` file, you can put the files/directory to ignore when compiling.

## Documentation

### mem

| Name               | Prototype                                                                                 | Description                                                                        | Tested |
|--------------------|-------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------|--------|
| ft_bzero           | `void ft_bzero(void *s, size_t n)`                                                        | fill `n` bytes of `s` with 0                                                       | [x]    |
| ft_calloc          | `void *ft_calloc(size_t count, size_t size)`                                              | allocate `count` element of `size` and initialize them to 0                        | [x]    |
| ft_memccpy         | `void *ft_memccpy(void *dest, const void *src, int c, size_t n)`                          | copy `n` byte from `src` to `dest` until `c` is reached                            | [x]    |
| ft_memchr          | `void *ft_memchr(const void *s, int c, size_t n)`                                         | return the address of the first occurance of `c` in `s` or NULL if `c` isn't found | [x]    |
| ft_memcmp          | `int	 ft_memcmp(const void *s1, const void *s2, size_t n)`                                | compare `n` byte of `s1` and `s2`                                                  | [x]    |
| ft_memcpy          | `void *ft_memcpy(void *dest, const void *src, size_t n)`                                  | copy `n` byte from `src` to `dest`                                                 | [x]    |
| ft_memmem          | `void *ft_memmem(const void *big, size_t big_len, const void *little, size_t little_len)` | search `little` in `big`                                                           | [x]    |
| ft_memmove         | `void *ft_memmove(void *dst, const void *src, size_t len)`                                | copy `len` byte from `src` to `dst` and the copied memory can overlap              | [x]    |
| ft_memset          | `void *ft_memset(void *s, int c, size_t n)`                                               | set `n` byte of `s` to `c`                                                         | [x]    |
| ft_memset_pattern4 | `void ft_memset_pattern4(void *b, const void *pattern4, size_t len)`                      | set `len` byte of `b` to a reapeated pattern of 4 bytes                            | [x]    |
| ft_memswap         | `void ft_memswap(void *a, void *b, size_t size)`                                          | swap `a` and `b` memory                                                            | [x]    |

### algo

| Name          | Prototype                                                                                           | Description                                                                        | Tested |
|---------------|-----------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------|--------|
| ft_bsearch    | `void *ft_bsearch(const void *base, size_t nel, size_t width, t_ftsearch_const *consts)`            | search `consts.key` in `base` using binary search (NULL if not found)              | [x]    |
| ft_compar_int | `int ft_compar_int(const void *a, const void *b)`                                                   | comparison function of `int`                                                       | [x]    |
| ft_heapsort   | `int ft_heapsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *))`  | sort `base` using heapsort                                                         | [?]    |
| ft_is_set     | `t_ftbool ft_is_set(void *base, size_t nel, size_t width, t_ftcompar_func compar)`                  | check is `base` has unique elements                                                | [x]    |
| ft_lfind      | `void *ft_lfind(const void *base, size_t *nelp, size_t width, t_ftsearch_const *consts)`            | search `consts.key` in `base` using linear search (NULL if not found)              | [x]    |
| ft_lsearch    | `void *ft_lsearch(const void *base, size_t *nelp, size_t width, t_ftsearch_const *consts)`          | search `consts.key` in `base` using linear search (insert at the end if not found) | [x]    |
| ft_mergesort  | `int ft_mergesort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *))` | sort `base` using mergesort                                                        | [x]    |
| ft_qsort      | `void ft_qsort(void *base, size_t nel, size_t width, t_ftcompar_func compar)`                       | sort `base` using quicksort                                                        | [x]    |
| ft_reverse    | `void ft_reverse(void *base, size_t nel, size_t width)`                                             | reverse `base`                                                                     | [x]    |

### bt

| Name         | Prototype                                                     | Description                                  | Tested |
|--------------|---------------------------------------------------------------|----------------------------------------------|--------|
| ft_btdestroy | `void ft_btdestroy(t_ftbtree *tree, void (*del)(void *data))` | destroy `tree` and apply `del` on nodes data | [ ]    |
| ft_btnew     | `t_ftbtree *ft_btnew(void *data)`                             | create a new node with `data`                | [ ]    |

### ctype

| Name       | Prototype               | Description                                        | Tested |
|------------|-------------------------|----------------------------------------------------|--------|
| ft_isalnum | `int	ft_isalnum(int c)` | c is alphanumeric                                  | [x]    |
| ft_isalpha | `int	ft_isalpha(int c)` | c is alphabetic                                    | [x]    |
| ft_isascii | `int	ft_isascii(int c)` | c is ascii                                         | [x]    |
| ft_isblank | `int	ft_isblank(int c)` | c is `\t` ` `                                      | [x]    |
| ft_isdigit | `int	ft_isdigit(int c)` | c is a digit                                       | [x]    |
| ft_isprint | `int	ft_isprint(int c)` | c is a printable character                         | [x]    |
| ft_isspace | `int	ft_isspace(int c)` | c is `\t` `\n` `\v` `\f` `\r` ` `                  | [x]    |
| ft_todigit | `int	ft_todigit(int c)` | convert lower case to upper case                   | [x]    |
| ft_tolower | `int	ft_tolower(int c)` | convert upper case to lower case                   | [x]    |
| ft_toupper | `int	ft_toupper(int c)` | convert digit character to int (-1 if not a digit) | [x]    |

### ht

| Name             | Prototype                                                               | Description                                               | Tested |
|------------------|-------------------------------------------------------------------------|-----------------------------------------------------------|--------|
| ft_htcontent_new | `t_ftht_content *ft_htcontent_new(char *key, void *value)`              | create a new key/value pair                               | [ ]    |
| ft_htdelone      | `void ft_htdelone(t_ftht *ht, char *key, void (*del)(t_ftht_content*))` | delete element at `key`                                   | [ ]    |
| ft_htdelone_key  | `void ft_htdelone_key(t_ftht *ht, char *key)`                           | delete element at `key` and free `key`                    | [ ]    |
| ft_htdestroy     | `void ft_htdestroy(t_ftht *ht, void (*del)(t_ftht_content*))`           | destroy `ht` with the `del` functions applied on values   | [ ]    |
| ft_htdestroy_all | `void ft_htdestroy_all(t_ftht *ht)`                                     | destroy `ht`, free keys and values                        | [ ]    |
| ft_htdestroy_key | `void ft_htdestroy_key(t_ftht *ht)`                                     | destroy `ht`, free keys                                   | [ ]    |
| ft_htget         | `void *ft_htget(t_ftht *ht, char *key)`                                 | return value at `key`                                     | [ ]    |
| ft_htnew         | `t_ftht *ft_htnew(t_ftsize size)`                                       | create a new hash table with a underlying array of `size` | [ ]    |
| ft_htset         | `t_ftht_content *ft_htset(t_ftht *ht, char *key, void *value)`          | set `key` to value, if element doesn't exist, create it   | [ ]    |

### io

| Name          | Prototype                               | Description                                    | Tested |
|---------------|-----------------------------------------|------------------------------------------------|--------|
| ft_getchar    | `char ft_getchar(void)`                 | read one character from stdin and return it    | [ ]    |
| ft_next_line  | `int ft_next_line(int fd, char **line)` | read a line of `fd` and put it in `line`       | [ ]    |
| ft_putchar    | `void ft_putchar(char c)`               | write a character on stdout                    | [ ]    |
| ft_putchar_fd | `void ft_putchar_fd(char c, int fd)`    | write a character on `fd`                      | [ ]    |
| ft_putendl    | `void ft_putendl(char *s)`              | write a string followed by a newline on stdout | [ ]    |
| ft_putendl_fd | `void ft_putendl_fd(char *s, int fd)`   | write a string followed by a newline on `fd`   | [ ]    |
| ft_putnbr     | `void ft_putnbr(int n)`                 | write a number on stdout                       | [ ]    |
| ft_putnbr_fd  | `void ft_putnbr_fd(int n, int fd)`      | write a number on `fd`                         | [ ]    |
| ft_putstr     | `void ft_putstr(char const *s)`         | write a string on stdout                       | [ ]    |
| ft_putstr_fd  | `void ft_putstr_fd(char *s, int fd)`    | write a string on `fd`                         | [ ]    |

### printf

| Name          | Prototype                                                                  | Description                                                         | Tested |
|---------------|----------------------------------------------------------------------------|---------------------------------------------------------------------|--------|
| ft_asprintf   | `int ft_asprintf(char **ret, const char *format, ...)`                     | allocate and return the formated string                             | [ ]    |
| ft_dprintf    | `int ft_dprintf(int fd, const char *format, ...)`                          | write formated string to `fd`                                       | [ ]    |
| ft_printf     | `int ft_printf(const char *format, ...)`                                   | write formated string to stdout                                     | [ ]    |
| ft_snprintf   | `int ft_snprintf(char *str, size_t size, const char *format, ...)`         | write formated string in `str` with max `size` character            | [ ]    |
| ft_sprintf    | `int ft_sprintf(char *str, const char *format, ...)`                       | write formated string in `str`                                      | [ ]    |
| ft_vasprintf  | `int ft_vasprintf(char **ret, const char *format, va_list ap)`             | allocate and return the formated string, with `ap`                  | [ ]    |
| ft_vdprintf   | `int ft_vdprintf(int fd, const char *format, va_list ap)`                  | write formated string to `fd` , with `ap`                           | [ ]    |
| ft_vprintf    | `int ft_vprintf(const char *format, va_list ap)`                           | write formated string to stdout, with `ap`                          | [ ]    |
| ft_vsnprintf  | `int ft_vsnprintf(char *str, size_t size, const char *format, va_list ap)` | write formated string in `str` with max `size` character, with `ap` | [ ]    |
| ft_vsprintf   | `int ft_vsprintf(char *str, const char *format, va_list ap)`               | write formated string in `str`, with `ap`                           | [ ]    |

### lst

| Name               | Prototype                                                                                                                 | Description                                                       | Tested |
|--------------------|---------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------|--------|
| ft_lstadd_back     | `void ft_lstadd_back(t_ftlst **alst, t_ftlst *new)`                                                                       | add `new` at the start of `alst`                                  | [x]    |
| ft_lstadd_front    | `void ft_lstadd_front(t_ftlst **alst, t_ftlst *new)`                                                                      | add `new` at the end of `alst`                                    | [x]    |
| ft_lstbsearch      | `t_ftlst *ft_lstbsearch(t_ftlst *lst, t_ftbool (*equal)(void *ref, void *content), void *ref)`                            | search `ref` in `lst` using binary search                         | [ ]    |
| ft_lstclear        | `void ft_lstclear(t_ftlst **lst, void (*del)(void *))`                                                                    | free all data with `del`, free all nodes and set `*lst` to NULL   | [ ]    |
| ft_lstdelone       | `void ft_lstdelone(t_ftlst *lst, void (*del)(void *))`                                                                    | free `lst` node                                                   | [ ]    |
| ft_lstiter         | `void ft_lstiter(t_ftlst *lst, void (*f)(void *))`                                                                        | apply `f` on each node of `lst`                                   | [ ]    |
| ft_lstlast         | `t_ftlst *ft_lstlast(t_ftlst *lst)`                                                                                       | return the last node of `lst`                                     | [ ]    |
| ft_lstmap          | `t_ftlst *ft_lstmap(t_ftlst *lst, void *(*f)(void *), void (*del)(void *))`                                               | create a new list which is `lst` with all node passed through `f` | [ ]    |
| ft_lstnew          | `t_ftlst *ft_lstnew(void const *content)`                                                                                 | create a new node with `content`                                  | [x]    |
| ft_lstpop_front    | `void ft_lstpop_front(t_ftlst **lst, void (*del)(void *))`                                                                | remove the front of `lst`                                         | [ ]    |
| ft_lstremove_if    | `void ft_lstremove_if(t_ftlst **lst, t_ftbool (*equal)(void *ref, void *content), void *ref, void (*del)(void *content))` | remove all element which verify `equal`                           | [ ]    |
| ft_lstreverse      | `void ft_lstreverse(t_ftlst **lst)`                                                                                       | reverse `lst`                                                     | [ ]    |
| ft_lstreverse_ret  | `t_ftlst *ft_lstreverse_ret(t_ftlst *lst)`                                                                                | reverse `lst` and return it                                       | [ ]    |
| ft_lstsize         | `int ft_lstsize(t_ftlst *lst)`                                                                                            | return the number of node in `lst`                                | [x]    |
| ft_lstsort         | `void ft_lstsort(t_ftlst **begin_list, int (*cmp)(void *, void*))`                                                        | sort `begin_list` using mergesort                                 | [ ]    |
| ft_lstsorted_merge | `t_ftlst *ft_lstsorted_merge(t_ftlst *l1, t_ftlst *l2, int (*cmp)(void *, void *))`                                       | merge 2 sorted list and return the merged and still sorted one    | [ ]    |

### str

| Name           | Prototype                                                                | Description                                                                                                                         | Tested |
|----------------|--------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------|--------|
| ft_atoi        | `int ft_atoi(const char *nptr)`                                          | convert `nptr` to an int                                                                                                            | [ ]    |
| ft_atoi_strict | `int ft_atoi_strict(const char *s )`                                     | convert `nptr` to an int without spaces or other characters                                                                         | [ ]    |
| ft_itoa        | `char *ft_itoa(int n)`                                                   | return a string which represent `n`                                                                                                 | [ ]    |
| ft_split       | `char **ft_split(char const *s, char c)`                                 | return the strings in between `c` in `s`                                                                                            | [ ]    |
| ft_strcasecmp  | `int ft_strcasecmp(const char *s1, const char *s2)`                      | compare `s1` and `s2` ignoring case                                                                                                 | [ ]    |
| ft_strcat      | `char *ft_strcat(char *dest, const char *src)`                           | concatenate `dest` and `src` in `dest`                                                                                              | [ ]    |
| ft_strchr      | `char *ft_strchr(const char *s, int c)`                                  | search `c` in `s`, return address if found, NULL otherwise                                                                          | [ ]    |
| ft_strcmp      | `int ft_strcmp(const char *s1, const char *s2)`                          | compare `s1` and `s2`                                                                                                               | [ ]    |
| ft_strcount    | `int ft_strcount(char *str, char c)`                                     | count the number of occurence of `c` in `str`                                                                                       | [ ]    |
| ft_strcpy      | `char *ft_strcpy(char *dest, const char *src)`                           | copy `src` in `dest`                                                                                                                | [ ]    |
| ft_strcspn     | `size_t ft_strcspn(const char *s, const char *charset)`                  | return the index of the first character in `charset`                                                                                | [ ]    |
| ft_strdup      | `char *ft_strdup(const char *s)`                                         | allocate and copy `s` in a new string then return it                                                                                | [ ]    |
| ft_strequ      | `int ft_strequ(char const *s1, char const *s2)`                          | test if `s1` and `s2` are equal                                                                                                     | [ ]    |
| ft_striter     | `void ft_striter(char *s, void (*f)(char *))`                            | apply `f` over every character of `s`                                                                                               | [ ]    |
| ft_striteri    | `void ft_striteri(char *s, void (*f)(unsigned int, char *))`             | apply `f` over every character of `s` with index                                                                                    | [ ]    |
| ft_strjoin     | `char *ft_strjoin(char const *s1, char const *s2)`                       | allocate a concatenation of `s1` and `s2`                                                                                           | [ ]    |
| ft_strjoinf    | `char *ft_strjoinf(char const *s1, char const *s2, t_ftstrjoin_tag tag)` | allocate a concatenation of `s1` and `s2` then free `s1`, `s2` or both according to `tag`                                           | [ ]    |
| ft_strlcat     | `size_t ft_strlcat(char *dst, const char *src, size_t size)`             | concatenate `dest` and `src` in dest with maximum `size - 1` character                                                              | [ ]    |
| ft_strlcpy     | `size_t ft_strlcpy(char *dst, const char *src, size_t size)`             | copy `src` in `dest` with maximum `size - 1` character                                                                              | [ ]    |
| ft_strlen      | `size_t ft_strlen(const char *s)`                                        | return the length of `s`                                                                                                            | [x]    |
| ft_strmap      | `char *ft_strmap(char const *s, char (*f)(char))`                        | allocate a copy of `s` with every character passed through `f`                                                                      | [ ]    |
| ft_strmapi     | `char *ft_strmapi(char *s, char (*f)(unsigned int, char))`               | allocate a copy of `s` with every character passed through `f` with index                                                           | [ ]    |
| ft_strncasecmp | `int ft_strncasecmp(const char *s1, const char *s2, size_t n)`           | compare `s1` and `s2` ignoring case until `n`                                                                                       | [ ]    |
| ft_strncat     | `char *ft_strncat(char *dest, const char *src, size_t n)`                | concatenate `dest` and `src` in dest with maximum `n` character                                                                     | [ ]    |
| ft_strncmp     | `int ft_strncmp(const char *s1, const char *s2, size_t n)`               | compare `s1` and `s2` until `n`                                                                                                     | [ ]    |
| ft_strncpy     | `char *ft_strncpy(char *dest, const char *src, size_t n)`                | copy `src` in `dest` with maximum `n` character                                                                                     | [ ]    |
| ft_strndup     | `char *ft_strndup(const char *s1, size_t n)`                             | allocate and copy `s` until `n` in a new string then return it                                                                      | [ ]    |
| ft_strnequ     | `int ft_strnequ(char const *s1, char const *s2, size_t n)`               | test if `s1` and `s2` are not equal                                                                                                 | [ ]    |
| ft_strnlen     | `size_t ft_strnlen(const char *s, size_t maxlen)`                        | return the length of `s` until `maxlen`                                                                                             | [ ]    |
| ft_strnstr     | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | search `len` character of `haystack` for `needle`                                                                                   | [ ]    |
| ft_strpbrk     | `char *ft_strpbrk(const char *s, const char *charset)`                   | return the address of the first character in `charset` in `s` (NULL if not any)                                                     | [ ]    |
| ft_strrchr     | `char *ft_strrchr(const char *s, int c)`                                 | search `c` in `s` from the end, return the address of first match (NULL if not found)                                               | [ ]    |
| ft_strsep      | `char *ft_strsep(char **stringp, const char *delim)`                     | find first occurance of `delim` in `*stringp` replace it with `'\0'` return pointer to the match and store char after in `*stringp` | [ ]    |
| ft_strspn      | `size_t ft_strspn(const char *s, const char *charset)`                   | return the index of the first character not in `charset`                                                                            | [ ]    |
| ft_strstr      | `char *ft_strstr(const char *haystack, const char *needle)`              | search for `needle` in `haystack` (NULL if not found)                                                                               | [ ]    |
| ft_strtol      | `long ft_strtol(const char *s, char **endptr, int base)`                 | convert `s` to a long int and store address of the next to last digit in `endptr`, according to `base` (2..26)                      | [ ]    |
| ft_strtolower  | `char *ft_strtolower(char *s)`                                           | convert all characters of `s` to lower case                                                                                         | [ ]    |
| ft_strtoupper  | `char *ft_strtoupper(char *s)`                                           | convert all characters of `s` to upper case                                                                                         | [ ]    |
| ft_strtrim     | `char *ft_strtrim(char const *s1, char const *set)`                      | remove the characters in `set` at the start and end of `s1`                                                                         | [ ]    |
| ft_substr      | `char *ft_substr(char const *s, unsigned int start, size_t len)`         | allocate and fill substring in `s` at `start` with length `len`                                                                     | [ ]    |

## School correction state

The state of this project when I turned it in for correction is [here](http://github.com/HappyTramp/libft/tree/raw).
