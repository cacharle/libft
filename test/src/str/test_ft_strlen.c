#include "libft_test.h"

TEST_GROUP(ft_strlen);

TEST_SETUP(ft_strlen)
{}

TEST_TEAR_DOWN(ft_strlen)
{}

#define TEST_ASSERT_FT_STRLEN(str) do { \
	if (strlen(str) != ft_strlen(str))  \
		TEST_FAIL();                    \
} while(0);

TEST(ft_strlen, basic)
{
	TEST_ASSERT_FT_STRLEN("");
	TEST_ASSERT_FT_STRLEN("bonjour");
	TEST_ASSERT_FT_STRLEN("1");
	TEST_ASSERT_FT_STRLEN("asodifuaosidjoiasjdfoijasklfqwkberkjqwerkjqwlkenrmnqwerjkqwehfakjs");
	TEST_ASSERT_FT_STRLEN("im\0hidden");
	TEST_ASSERT_FT_STRLEN("987987\xff\xee\xaasdfioxcv");
}
