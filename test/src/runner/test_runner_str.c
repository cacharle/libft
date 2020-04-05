#include "libft_test.h"

TEST_GROUP_RUNNER(ft_strlen)
{
	RUN_TEST_CASE(ft_strlen, basic);
}

TEST_GROUP_RUNNER(ft_fnmatch)
{
	RUN_TEST_CASE(ft_fnmatch, basic);
}

TEST_GROUP_RUNNER(ft_strsjoin)
{
	RUN_TEST_CASE(ft_strsjoin, basic);
}

TEST_GROUP_RUNNER(ft_strsjoinf)
{
	RUN_TEST_CASE(ft_strsjoinf, basic);
}

TEST_GROUP_RUNNER(ft_strsub)
{
	RUN_TEST_CASE(ft_strsub, basic);
}

TEST_GROUP_RUNNER(ft_strsubf)
{
	RUN_TEST_CASE(ft_strsubf, basic);
}
