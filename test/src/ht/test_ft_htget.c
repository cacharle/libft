#include "libft_test.h"

TEST_GROUP(ft_htget);

static t_ftht *ht;

TEST_SETUP(ft_htget)
{
	ht = ft_htnew(10);
}

TEST_TEAR_DOWN(ft_htget)
{
	/* ft_htdestroy_key(ht); */
}

int helper_segfault_pid;

TEST(ft_htget, segfault)
{
	TEST_ASSERT_SEGFAULT(ft_htget((t_ftht*)NULL, ""));
	TEST_ASSERT_SEGFAULT(ft_htget(ft_htnew(1), (char*)NULL));
	TEST_ASSERT_SEGFAULT(ft_htget(ft_htnew(1), ""));
	TEST_ASSERT_SEGFAULT(ft_htget(ft_htnew(1), "asdkfhjaklsdfhahjsdfk"));
}

TEST(ft_htget, error_null)
{
	TEST_ASSERT_NULL(ft_htget(NULL, NULL));
	TEST_ASSERT_NULL(ft_htget(ht, NULL));
	TEST_ASSERT_NULL(ft_htget(NULL, ""));
	TEST_ASSERT_NULL(ft_htget(ht, ""));
	TEST_ASSERT_NULL(ft_htget(ht, "hi"));
	TEST_ASSERT_NULL(ft_htget(ht, "asdfkasdflk"));
}
