#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include <string.h>
# include <ctype.h>
# include <sys/wait.h>
# ifdef __APPLE__
#  include <malloc/malloc.h>
# endif

# include "unity.h"
# include "unity_fixture.h"

# undef free
# undef malloc

# include <stdlib.h>

# include "libft.h"
# include "libft_algo.h"
# include "libft_lst.h"
# include "libft_ht.h"
# include "libft_vec.h"

# include "helper/helper_segfault.h"

#endif
