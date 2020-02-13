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

| Name         | Prototype | Description | Tested |
|--------------|-----------|-------------|--------|
| ft_btdestroy |  |  |  |
| ft_btnew     |  |  |  |

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

| Name             | Prototype | Description | Tested |
|------------------|-----------|-------------|--------|
| ft_htcontent_new |  |  |  |
| ft_htdelone      |  |  |  |
| ft_htdelone_key  |  |  |  |
| ft_htdestroy     |  |  |  |
| ft_htdestroy_all |  |  |  |
| ft_htdestroy_key |  |  |  |
| ft_htget         |  |  |  |
| ft_hthash        |  |  |  |
| ft_htnew         |  |  |  |
| ft_htset         |  |  |  |

### io

| Name          | Prototype | Description | Tested |
|---------------|-----------|-------------|--------|
| ft_getchar    |  |  |  |
| ft_next_line  |  |  |  |
| ft_asprintf   |  |  |  |
| ft_dprintf    |  |  |  |
| ft_printf     |  |  |  |
| ft_snprintf   |  |  |  |
| ft_sprintf    |  |  |  |
| ft_vasprintf  |  |  |  |
| ft_vdprintf   |  |  |  |
| ft_vprintf    |  |  |  |
| ft_vsnprintf  |  |  |  |
| ft_vsprintf   |  |  |  |
| ft_putchar    |  |  |  |
| ft_putchar_fd |  |  |  |
| ft_putendl    |  |  |  |
| ft_putendl_fd |  |  |  |
| ft_putnbr     |  |  |  |
| ft_putnbr_fd  |  |  |  |
| ft_putstr     |  |  |  |
| ft_putstr_fd  |  |  |  |

### lst

| Name | Prototype | Description | Tested |
|------|-----------|-------------|--------|
| ft_lstadd_back     |  |  |  |
| ft_lstadd_front    |  |  |  |
| ft_lstbsearch      |  |  |  |
| ft_lstclear        |  |  |  |
| ft_lstdelone       |  |  |  |
| ft_lstiter         |  |  |  |
| ft_lstlast         |  |  |  |
| ft_lstmap          |  |  |  |
| ft_lstnew          |  |  |  |
| ft_lstpop_front    |  |  |  |
| ft_lstremove_if    |  |  |  |
| ft_lstreverse      |  |  |  |
| ft_lstreverse_ret  |  |  |  |
| ft_lstsize         |  |  |  |
| ft_lstsort         |  |  |  |
| ft_lstsorted_merge |  |  |  |

### str

| Name | Prototype | Description | Tested |
|------|-----------|-------------|--------|
| ft_atoi |  |  |  |  |
| ft_atoi_strict |  |  |  |  |
| ft_itoa |  |  |  |  |
| ft_split |  |  |  |  |
| ft_strcasecmp |  |  |  |  |
| ft_strcat |  |  |  |  |
| ft_strchr |  |  |  |  |
| ft_strclr |  |  |  |  |
| ft_strcmp |  |  |  |  |
| ft_strcount |  |  |  |  |
| ft_strcpy |  |  |  |  |
| ft_strcspn |  |  |  |  |
| ft_strdel |  |  |  |  |
| ft_strdup |  |  |  |  |
| ft_strequ |  |  |  |  |
| ft_striter |  |  |  |  |
| ft_striteri |  |  |  |  |
| ft_strjoin |  |  |  |  |
| ft_strjoin_free |  |  |  |  |
| ft_strjoin_free_snd |  |  |  |  |
| ft_strlcat |  |  |  |  |
| ft_strlcpy |  |  |  |  |
| ft_strlen |  |  |  |  |
| ft_strmap |  |  |  |  |
| ft_strmapi |  |  |  |  |
| ft_strncasecmp |  |  |  |  |
| ft_strncat |  |  |  |  |
| ft_strncmp |  |  |  |  |
| ft_strncpy |  |  |  |  |
| ft_strndup |  |  |  |  |
| ft_strnequ |  |  |  |  |
| ft_strnew |  |  |  |  |
| ft_strnlen |  |  |  |  |
| ft_strnstr |  |  |  |  |
| ft_strpbrk |  |  |  |  |
| ft_strrchr |  |  |  |  |
| ft_strsep |  |  |  |  |
| ft_strspn |  |  |  |  |
| ft_strstr |  |  |  |  |
| ft_strtol |  |  |  |  |
| ft_strtolower |  |  |  |  |
| ft_strtoupper |  |  |  |  |
| ft_strtrim |  |  |  |  |
| ft_substr |  |  |  |  |

## School correction state

The state of this project when I turned it in for correction is [here](http://github.com/HappyTramp/libft/tree/raw).
