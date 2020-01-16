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


TEST(ft_strlen)
{
	ASSERT(ft_strlen, "bonjour");
	ASSERT(ft_strlen, "yo");
	ASSERT(ft_strlen, "slt");
}
