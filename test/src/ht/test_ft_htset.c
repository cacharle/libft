#include "libft_test.h"

TEST_GROUP(ft_htset);

static t_ftht *ht;

TEST_SETUP(ft_htset)
{
	ht = ft_htnew(10);
}

TEST_TEAR_DOWN(ft_htset)
{
	ft_htdestroy_key(ht);
}

TEST(ft_htset, segfault)
{
	TEST_ASSERT_SEGFAULT(ft_htset(NULL, "", strdup("")));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), NULL, strdup("")));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "", NULL));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "", strdup("")));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "hi", strdup("")));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "asdfasdfasdc", strdup("")));
}

TEST(ft_htset, error_null)
{
	TEST_ASSERT_NULL(ft_htset(NULL, "", strdup("1")));
	TEST_ASSERT_NULL(ft_htset(ht, NULL, strdup("2")));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "", strdup("3")));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "a", strdup("4")));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "b", strdup("5")));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "c", strdup("6")));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "d", strdup("7")));
}

TEST(ft_htset, happy_path)
{
	t_ftht_content *content = ft_htset(ht, "bonjour", strdup("content"));
	TEST_ASSERT_NOT_NULL(content);
	TEST_ASSERT_NOT_NULL(content->key);
	TEST_ASSERT_NOT_NULL(content->value);
	TEST_ASSERT_EQUAL_STRING(content->key, "bonjour");
	TEST_ASSERT_EQUAL_STRING(content->value, "content");
}

TEST(ft_htset, collision)
{

}
