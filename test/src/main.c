#include "libft_test.h"

static void run_all_test(void)
{
	RUN_TEST_GROUP(ft_strlen);
	RUN_TEST_GROUP(ft_htnew);
	RUN_TEST_GROUP(ft_htget);
	RUN_TEST_GROUP(ft_htset);
}

int main(int argc, const char **argv)
{
	return UnityMain(argc, argv, run_all_test);
}
