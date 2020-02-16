#include "libft_test.h"

TEST_GROUP(ft_calloc);

TEST_SETUP(ft_calloc)
{}

TEST_TEAR_DOWN(ft_calloc)
{}

TEST(ft_calloc, basic)
{
	char *ptr = NULL;

	ptr = ft_calloc(45, sizeof(char));
	TEST_ASSERT_NOT_NULL(ptr);
#ifdef __APPLE__
	TEST_ASSERT_GREATER_THAN(45 * sizeof(char) - 1, malloc_size(ptr));
#endif
	for (int i = 0; i < 45; i++)
		TEST_ASSERT_EQUAL(0x0, ptr[i]);
	/* free(ptr); */

	int *ptrint = NULL;
	ptrint = ft_calloc(10, sizeof(int));
	TEST_ASSERT_NOT_NULL(ptr);
#ifdef __APPLE__
	TEST_ASSERT_GREATER_THAN(10 * sizeof(int) - 1, malloc_size(ptrint));
#endif
	for (int i = 0; i < 10; i++)
		TEST_ASSERT_EQUAL(0x0, ptrint[i]);
	/* free(ptrint); */
}
