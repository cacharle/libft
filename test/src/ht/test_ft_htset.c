#include "libft_test.h"

TEST_GROUP(ft_htset);

static t_ftht *ht;

TEST_SETUP(ft_htset)
{
	ht = ft_htnew(10);
}

TEST_TEAR_DOWN(ft_htset)
{
	/* ft_htdestroy_key(ht); */
}

static void st_del(t_ftht_entry *c)
{
	free(c->key);
	free(c);
}

TEST(ft_htset, segfault)
{
	TEST_ASSERT_SEGFAULT(ft_htset(NULL, "", strdup(""), NULL));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), NULL, strdup(""), NULL));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "", NULL, NULL));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "", strdup(""), NULL));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "hi", strdup(""), NULL));
	TEST_ASSERT_SEGFAULT(ft_htset(ft_htnew(1), "asdfasdfasdc", strdup(""), NULL));
}

TEST(ft_htset, error_null)
{
	TEST_ASSERT_NULL(ft_htset(NULL, "", strdup("1"), NULL));
	TEST_ASSERT_NULL(ft_htset(ht, NULL, strdup("2"), NULL));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "", strdup("3"), NULL));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "a", strdup("4"), NULL));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "b", strdup("5"), NULL));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "c", strdup("6"), NULL));
	TEST_ASSERT_NOT_NULL(ft_htset(ht, "d", strdup("7"), NULL));
}

TEST(ft_htset, happy_path)
{
	t_ftht_entry *content = ft_htset(ht, "bonjour", strdup("content"), NULL);
	TEST_ASSERT_NOT_NULL(content);
	TEST_ASSERT_NOT_NULL(content->key);
	TEST_ASSERT_NOT_NULL(content->value);
	TEST_ASSERT_EQUAL_STRING(content->key, "bonjour");
	TEST_ASSERT_EQUAL_STRING(content->value, "content");
}

TEST(ft_htset, reset)
{
	t_ftht *small = NULL;

	small = ft_htnew(3);

	t_ftht_entry *content = ft_htset(small, "bonjour", ft_strdup("content"), st_del);
	TEST_ASSERT_NOT_NULL(content);
	TEST_ASSERT_NOT_NULL(content->key);
	TEST_ASSERT_NOT_NULL(content->value);
	TEST_ASSERT_EQUAL_STRING(content->key, "bonjour");
	TEST_ASSERT_EQUAL_STRING(content->value, "content");

	t_ftht_entry *content_re = ft_htset(small, "bonjour", ft_strdup("yo"), st_del);
	TEST_ASSERT_NOT_NULL(content_re);
	TEST_ASSERT_NOT_NULL(content_re->key);
	TEST_ASSERT_NOT_NULL(content_re->value);
	TEST_ASSERT_EQUAL_STRING("bonjour", content_re->key);
	TEST_ASSERT_EQUAL_STRING("yo", content_re->value);
}

TEST(ft_htset, collision)
{
	t_ftht *small = NULL;
	small = ft_htnew(1);

	t_ftht_entry *content1 = ft_htset(small, "bonjour", strdup("content1"), st_del);
	TEST_ASSERT_NOT_NULL(content1);
	TEST_ASSERT_NOT_NULL(content1->key);
	TEST_ASSERT_NOT_NULL(content1->value);
	TEST_ASSERT_EQUAL_STRING(content1->key, "bonjour");
	TEST_ASSERT_EQUAL_STRING(content1->value, "content1");

	t_ftht_entry *content2 = ft_htset(small, "aurevoir", strdup("content2"), st_del);
	TEST_ASSERT_NOT_NULL(content2);
	TEST_ASSERT_NOT_NULL(content2->key);
	TEST_ASSERT_NOT_NULL(content2->value);
	TEST_ASSERT_EQUAL_STRING(content2->key, "aurevoir");
	TEST_ASSERT_EQUAL_STRING(content2->value, "content2");

	t_ftht_entry *content3 = ft_htset(small, "aloa", strdup("content3"), st_del);
	TEST_ASSERT_NOT_NULL(content3);
	TEST_ASSERT_NOT_NULL(content3->key);
	TEST_ASSERT_NOT_NULL(content3->value);
	TEST_ASSERT_EQUAL_STRING(content3->key, "aloa");
	TEST_ASSERT_EQUAL_STRING(content3->value, "content3");
}
