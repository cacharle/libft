#include "libft_test.h"

static void run_all_test(void)
{
	// ctype
	RUN_TEST_GROUP(ft_isalnum);
	RUN_TEST_GROUP(ft_isalpha);
	RUN_TEST_GROUP(ft_isascii);
	RUN_TEST_GROUP(ft_isblank);
	RUN_TEST_GROUP(ft_isdigit);
	RUN_TEST_GROUP(ft_isprint);
	RUN_TEST_GROUP(ft_isspace);
	RUN_TEST_GROUP(ft_todigit);
	RUN_TEST_GROUP(ft_tolower);
	RUN_TEST_GROUP(ft_toupper);

	// mem
	RUN_TEST_GROUP(ft_bzero);
	RUN_TEST_GROUP(ft_calloc);
	RUN_TEST_GROUP(ft_memccpy);
	RUN_TEST_GROUP(ft_memchr);
	RUN_TEST_GROUP(ft_memcmp);
	RUN_TEST_GROUP(ft_memcpy);
	RUN_TEST_GROUP(ft_memmem);
	RUN_TEST_GROUP(ft_memmove);
	RUN_TEST_GROUP(ft_memset);
	RUN_TEST_GROUP(ft_memset_pattern4);
	RUN_TEST_GROUP(ft_memswap);

	// str
	RUN_TEST_GROUP(ft_strlen);

	// ht
	RUN_TEST_GROUP(ft_htentry_new);
	RUN_TEST_GROUP(ft_htnew);
	RUN_TEST_GROUP(ft_htget);
	RUN_TEST_GROUP(ft_htset);
	RUN_TEST_GROUP(ft_htdelone);
	RUN_TEST_GROUP(ft_htdestroy);

	// algo
	RUN_TEST_GROUP(ft_bsearch);
	RUN_TEST_GROUP(ft_compar_int);
	RUN_TEST_GROUP(ft_heapsort);
	RUN_TEST_GROUP(ft_is_set);
	RUN_TEST_GROUP(ft_lfind);
	RUN_TEST_GROUP(ft_lsearch);
	RUN_TEST_GROUP(ft_mergesort);
	RUN_TEST_GROUP(ft_qsort);
	RUN_TEST_GROUP(ft_reverse);

	// lst
	RUN_TEST_GROUP(ft_lstpush_back);
	RUN_TEST_GROUP(ft_lstpush_front);
	RUN_TEST_GROUP(ft_lstbsearch);
	RUN_TEST_GROUP(ft_lstlsearch);
	RUN_TEST_GROUP(ft_lstlfind);
	RUN_TEST_GROUP(ft_lstdestroy);
	RUN_TEST_GROUP(ft_lstdelone);
	RUN_TEST_GROUP(ft_lstiter);
	RUN_TEST_GROUP(ft_lstlast);
	RUN_TEST_GROUP(ft_lstmap);
	RUN_TEST_GROUP(ft_lstnew);
	RUN_TEST_GROUP(ft_lstpop_front);
	RUN_TEST_GROUP(ft_lstremove_if);
	RUN_TEST_GROUP(ft_lstreverse);
	RUN_TEST_GROUP(ft_lstreverse_ret);
	RUN_TEST_GROUP(ft_lstsize);
	RUN_TEST_GROUP(ft_lstsort);
	RUN_TEST_GROUP(ft_lstsorted_merge);

	// vec
	RUN_TEST_GROUP(ft_vecdestroy);
	RUN_TEST_GROUP(ft_vecgrow);
	RUN_TEST_GROUP(ft_veciter);
	RUN_TEST_GROUP(ft_vecnew);
	RUN_TEST_GROUP(ft_vecpop);
	RUN_TEST_GROUP(ft_vecpush);
	RUN_TEST_GROUP(ft_vecremove);
}

int main(int argc, const char **argv)
{
	return UnityMain(argc, argv, run_all_test);
}
