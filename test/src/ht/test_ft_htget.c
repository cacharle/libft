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

static void st_del(t_ftht_entry *c)
{
	free(c->key);
	free(c);
}

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
	TEST_ASSERT_NULL(ft_htget(ht, "asdhfalsdhflahsdfhjasklehjfklwhjekrlanklshasdfkasdflk"));
}

TEST(ft_htget, basic)
{
	ft_htset(ht, strdup("a"), strdup("data1"), st_del);
	ft_htset(ht, strdup("b"), strdup("data2"), st_del);
	ft_htset(ht, strdup("c"), strdup("data3"), st_del);

	char *s = ft_htget(ht, "a");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "data1"); 

	s = ft_htget(ht, "b");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "data2"); 

	s = ft_htget(ht, "c");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "data3"); 

	ft_htset(ht, strdup("a"), strdup("bonjour1"), st_del);
	ft_htset(ht, strdup("b"), strdup("bonjour2"), st_del);
	ft_htset(ht, strdup("c"), strdup("bonjour3"), st_del);

	s = ft_htget(ht, "a");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "bonjour1"); 

	s = ft_htget(ht, "b");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "bonjour2"); 

	s = ft_htget(ht, "c");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "bonjour3"); 
}

TEST(ft_htget, collision)
{
	t_ftht *small = ft_htnew(1);

	ft_htset(small, strdup("a"), strdup("data1"), st_del);
	ft_htset(small, strdup("b"), strdup("data2"), st_del);
	ft_htset(small, strdup("c"), strdup("data3"), st_del);

	char *s = ft_htget(small, "a");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "data1"); 

	s = ft_htget(small, "b");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "data2"); 

	s = ft_htget(small, "c");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "data3"); 

	ft_htset(small, strdup("a"), strdup("bonjour1"), st_del);
	ft_htset(small, strdup("b"), strdup("bonjour2"), st_del);
	ft_htset(small, strdup("c"), strdup("bonjour3"), st_del);

	s = ft_htget(small, "a");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "bonjour1"); 

	s = ft_htget(small, "b");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "bonjour2"); 

	s = ft_htget(small, "c");
	TEST_ASSERT_NOT_NULL(s);
	TEST_ASSERT_EQUAL_STRING(s, "bonjour3"); 
}
