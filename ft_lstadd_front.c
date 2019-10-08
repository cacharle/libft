#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
    new->next = *alst;
    *alst = new;
}
