#include <string.h>
#include "libft.h"
#include "ctest.h"

TEST_SEGV_FUNC(ft_strlen, char *str)
{
	ft_strlen(str);
}
TEST_SEGV_FUNC_END

ASSERT_FUNC1(ft_strlen, char*, str)
{
	return ft_strlen(str) == strlen(str);
}
ASSERT_FUNC1_END

ASSERT_PRINT_ARG_FUNC1(ft_strlen, char*, str)
{
	printf("(str: \"%.30s", str);
	if (strlen(str) > 30)
		fputs("...", stdout);
	fputs("\")", stdout);
}
ASSERT_PRINT_ARG_FUNC1_END


TEST(ft_strlen)
{
	ASSERT(ft_strlen, CTEST_DEF_EMPTY);
	ASSERT(ft_strlen, CTEST_DEF_HELLO);
	ASSERT(ft_strlen, CTEST_DEF_HIDDEN);
	ASSERT(ft_strlen, CTEST_DEF_FORMAT);
	ASSERT(ft_strlen, CTEST_DEF_LOREM_IPSUM);
}
