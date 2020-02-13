#ifndef HELPER_SEGFAULT_H
# define HELPER_SEGFAULT_H

extern int helper_segfault_pid;

# define TEST_ASSERT_SEGFAULT(code) do {    \
	fflush(stdout);                         \
	if ((helper_segfault_pid = fork()) < 0) \
		exit(EXIT_FAILURE);                 \
	if (helper_segfault_pid == 0)           \
	{                                       \
		do { code; } while (0);             \
		exit(EXIT_FAILURE);                 \
	}                                       \
	wait(&helper_segfault_pid);             \
	if (WIFSIGNALED(helper_segfault_pid))   \
		TEST_FAIL_MESSAGE("Segfault");      \
} while (0)

#endif
