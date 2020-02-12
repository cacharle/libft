#include "libft_test.h"

static void run_all_test(void)
{
	RUN_TEST_GROUP(ft_strlen);
	RUN_TEST_GROUP(ft_htnew);
	RUN_TEST_GROUP(ft_htget);
	RUN_TEST_GROUP(ft_htset);
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
}

int main(int argc, const char **argv)
{
	return UnityMain(argc, argv, run_all_test);
}
