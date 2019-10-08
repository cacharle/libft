#include <stdlib.h>
#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *cursor;

    if (*alst == NULL)
    {
        *alst = new;
        return ;
    }
    cursor = *alst;
    while (cursor->next != NULL)
        cursor = cursor->next;
    cursor->next = new;
}
