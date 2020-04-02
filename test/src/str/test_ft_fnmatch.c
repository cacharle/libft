#include "libft_test.h"

TEST_GROUP(ft_fnmatch);

TEST_SETUP(ft_fnmatch)
{}

TEST_TEAR_DOWN(ft_fnmatch)
{}

TEST(ft_fnmatch, basic)
{
	TEST_ASSERT_TRUE(ft_fnmatch("", ""));
	TEST_ASSERT_TRUE(ft_fnmatch("l", "l"));
	TEST_ASSERT_TRUE(ft_fnmatch("kl", "kl"));
	TEST_ASSERT_TRUE(ft_fnmatch("jkl", "jkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("ijkl", "ijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("hijkl", "hijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("ghijkl", "ghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("fghijkl", "fghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("efghijkl", "efghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("defghijkl", "defghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("cdefghijkl", "cdefghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("bcdefghijkl", "bcdefghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("abcdefghijkl", "abcdefghijkl"));

	TEST_ASSERT_FALSE(ft_fnmatch("", "a"));
	TEST_ASSERT_FALSE(ft_fnmatch("", "ab"));
	TEST_ASSERT_FALSE(ft_fnmatch("", "abc"));
	TEST_ASSERT_FALSE(ft_fnmatch("a", "ab"));
	TEST_ASSERT_FALSE(ft_fnmatch("ab", "abc"));
	TEST_ASSERT_FALSE(ft_fnmatch("a", ""));
	TEST_ASSERT_FALSE(ft_fnmatch("ab", ""));
	TEST_ASSERT_FALSE(ft_fnmatch("abc", ""));
	TEST_ASSERT_FALSE(ft_fnmatch("ab", "a"));
	TEST_ASSERT_FALSE(ft_fnmatch("abc", "ab"));

	TEST_ASSERT_TRUE(ft_fnmatch("*", ""));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "l"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "kl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "jkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "ijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "hijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "ghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "fghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "efghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "defghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "cdefghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "bcdefghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("*", "abcdefghijkl"));

	TEST_ASSERT_TRUE(ft_fnmatch("*.c", ".c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "l.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "kl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "jkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "ijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "hijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "ghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "fghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "efghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "defghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "cdefghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "bcdefghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.c", "abcdefghijkl.c"));

	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../l"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../kl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../jkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../ijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../hijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../ghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../fghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../efghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../defghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../cdefghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../bcdefghijkl"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*", "../abcdefghijkl"));

	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../l.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../kl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../jkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../ijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../hijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../ghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../fghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../efghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../defghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../cdefghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../bcdefghijkl.c"));
	TEST_ASSERT_TRUE(ft_fnmatch("../*.c", "../abcdefghijkl.c"));

	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "."));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "a.a"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "ab.ab"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "abc.abc"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "abcd.abcd"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "abcde.abcde"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "abcdef.abcdef"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "abcdefg.abcdefg"));
	TEST_ASSERT_TRUE(ft_fnmatch("*.*", "abcdefgh.abcdefgh"));

	TEST_ASSERT_FALSE(ft_fnmatch("*.c", ".h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "a.h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "ab.h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "abc.h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "abcd.h"));

	TEST_ASSERT_FALSE(ft_fnmatch("*.c", ".h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "a.h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "ab.h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "abc.h"));
	TEST_ASSERT_FALSE(ft_fnmatch("*.c", "abcd.h"));

	TEST_ASSERT_TRUE(ft_fnmatch("da*da*da*", "daaadabadmanda"));
}
