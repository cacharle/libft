#include "libft_test.h"

static void run_all_test(void)
{
	// ctype
	RUN_TEST_GROUP(ft_isalnum);
	RUN_TEST_GROUP(ft_isalpha);
	RUN_TEST_GROUP(ft_isascii);
	RUN_TEST_GROUP(ft_isblank);
	RUN_TEST_GROUP(ft_isdigit);
	RUN_TEST_GROUP(ft_isprint);
	RUN_TEST_GROUP(ft_isspace);
	RUN_TEST_GROUP(ft_todigit);
	RUN_TEST_GROUP(ft_tolower);
	RUN_TEST_GROUP(ft_toupper);

	// mem
	RUN_TEST_GROUP(ft_bzero);
	RUN_TEST_GROUP(ft_calloc);
	RUN_TEST_GROUP(ft_memccpy);
	RUN_TEST_GROUP(ft_memchr);
	RUN_TEST_GROUP(ft_memcmp);
	RUN_TEST_GROUP(ft_memcpy);
	RUN_TEST_GROUP(ft_memmem);
	RUN_TEST_GROUP(ft_memmove);
	RUN_TEST_GROUP(ft_memset);
	RUN_TEST_GROUP(ft_memset_pattern4);
	RUN_TEST_GROUP(ft_memswap);

	// str
	RUN_TEST_GROUP(ft_strlen);

	// ht
	RUN_TEST_GROUP(ft_htnew);
	RUN_TEST_GROUP(ft_htget);
	RUN_TEST_GROUP(ft_htset);

}

int main(int argc, const char **argv)
{
	return UnityMain(argc, argv, run_all_test);
}
